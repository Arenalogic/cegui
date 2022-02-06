/***********************************************************************
    created:    2022-01-30 (rewrite OgreRenderTarget for Ogre >= 2.2)
    author:     Robert Paciorek
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2011 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/

#include "CEGUI/RendererModules/Ogre/Renderer.h"
#ifdef CEGUI_USE_OGRE_TEXTURE_GPU

#include "CEGUI/RendererModules/Ogre/RenderTarget2.h"
#include "CEGUI/RendererModules/Ogre/GeometryBuffer.h"
#include "CEGUI/RendererModules/Ogre/Texture.h"
#include "CEGUI/RenderQueue.h"
#include "CEGUI/PropertyHelper.h"

#include <OgreRenderSystem.h>
#include <OgreRenderPassDescriptor.h>
#include <OgreColourValue.h>
#include <OgreWindow.h>
#include <OgreTextureGpuManager.h>
#include <OgreResourceGroupManager.h>

namespace CEGUI
{

std::uint32_t OgreRenderTextureTarget::s_textureNumber = 0;

OgreRenderTextureTarget::OgreRenderTextureTarget(
    OgreRenderer& owner, Ogre::RenderSystem* renderSystem, Ogre::TextureGpu* texture,
    bool addStencilBuffer, bool takeOwnership, bool isImageryCache
) :
    TextureTarget(addStencilBuffer),
    d_owner(owner),
    d_renderSystem(renderSystem),
    d_renderPassDescriptor(0),
    d_isImageryCache(isImageryCache),
    d_viewportScissors(0, 0, 1, 1)
{
    if (texture == NULL) {
        d_texture = static_cast<OgreTexture*>(
            &owner.createTexture(
                generateTextureName(), false
            )
        );
        setArea(0, 0); // this is null texture
    } else {
        d_texture = static_cast<OgreTexture*>(
            &owner.createTexture(
                generateTextureName(), texture, takeOwnership)
        );
        setArea(
            d_texture->getOgreTexture()->getWidth(),
            d_texture->getOgreTexture()->getHeight()
        );
        createRenderPassDescriptor();
    }
}

OgreRenderTextureTarget::~OgreRenderTextureTarget() {
    if (d_renderPassDescriptor) {
        d_renderSystem->destroyRenderPassDescriptor( d_renderPassDescriptor );
    }
    d_owner.destroyTexture(*d_texture);
}

//----------------------------------------------------------------------------//

void OgreRenderTextureTarget::setOgreTexture(Ogre::TextureGpu* texture, bool takeOwnership) {
    d_texture->setOgreTexture(texture, takeOwnership);
    setArea(
        d_texture->getOgreTexture()->getWidth(),
        d_texture->getOgreTexture()->getHeight()
    );
    createRenderPassDescriptor();
}

void OgreRenderTextureTarget::createRenderPassDescriptor() {
    // Destroy old pass descriptor
    if (d_renderPassDescriptor) {
        d_renderSystem->destroyRenderPassDescriptor( d_renderPassDescriptor );
    }

    // Create a pass descriptor to specify what texture we want to render against.
    d_renderPassDescriptor = d_renderSystem->createRenderPassDescriptor();
    d_renderPassDescriptor->mColour[0].texture = d_texture->getOgreTexture();
    d_renderPassDescriptor->mColour[0].loadAction = Ogre::LoadAction::Load;
    d_renderPassDescriptor->mColour[0].storeAction = Ogre::StoreAction::Store;
    d_renderPassDescriptor->mColour[0].clearColour = Ogre::ColourValue(0.0, 0.0, 0.0, 0.0);
    d_renderPassDescriptor->entriesModified( 1 );
}

void OgreRenderTextureTarget::declareRenderSize(const Sizef& sz)
{
    // exit if texture is linked
    if (d_texture->textureIsLinked())
        return;

    // exit if current size is enough
    if ((d_area.getWidth() >= sz.d_width) && (d_area.getHeight() >=sz.d_height))
        return;

    // The underlying texture is not sufficient for the requested size.
    // We create a new RTT here based on the dimensions requested.

    const Ogre::uint width = static_cast<Ogre::uint>(sz.d_width);
    const Ogre::uint height = static_cast<Ogre::uint>(sz.d_height);

    Ogre::TextureGpu* rttTex = d_renderSystem->getTextureGpuManager()->createTexture(
            OgreTexture::getUniqueName(),
            Ogre::GpuPageOutStrategy::Discard,
            Ogre::TextureFlags::RenderToTexture,
            Ogre::TextureTypes::Type2D,
            Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME
    );

    rttTex->setResolution(width, height, 1u);
    rttTex->setNumMipmaps(1);
    rttTex->setPixelFormat(Ogre::PFG_RGBA8_UNORM);

    rttTex->_transitionTo(Ogre::GpuResidency::Resident, nullptr);
    rttTex->_setNextResidencyStatus(Ogre::GpuResidency::Resident);
    rttTex->notifyDataIsReady();

    // because Texture takes ownership, the act of setting the new ogre texture
    // also ensures any previous ogre texture is released.
    d_texture->setOgreTexture(rttTex, true);

    setArea(rttTex->getWidth(), rttTex->getHeight());
    createRenderPassDescriptor();

    // Since we changed the texture, request viewport to be cleared.
    clear();
}

//----------------------------------------------------------------------------//

void OgreRenderTextureTarget::setArea(float width, float height)
{
    const Rectf init_area(
        glm::vec2(0.0f, 0.0f),
        Sizef(width, height)
    );
    setArea(init_area);
}

void OgreRenderTextureTarget::setArea(const Rectf& area)
{
    Ogre::TextureGpu* tex = d_texture->getOgreTexture();
    if (tex) {
        d_viewportSize.x = area.left() / tex->getWidth();
        d_viewportSize.y = area.top() / tex->getHeight();
        d_viewportSize.z = area.getWidth() / tex->getWidth();
        d_viewportSize.w = area.getHeight() / tex->getHeight();
    }

    RenderTarget::setArea(area);
    updateMatrix();
}

//----------------------------------------------------------------------------//

void OgreRenderTextureTarget::activate()
{
    if (d_needClear)
    {
        d_renderPassDescriptor->mColour[0].loadAction = Ogre::LoadAction::Clear;
        d_renderPassDescriptor->entriesModified( 1 );
    }

    d_owner.initialiseRenderStateSettings(this);

    RenderTarget::activate();
}

void OgreRenderTextureTarget::deactivate()
{
    d_renderSystem->endRenderPassDescriptor();

    if (d_needClear)
    {
        d_renderPassDescriptor->mColour[0].loadAction = Ogre::LoadAction::Load;
        d_renderPassDescriptor->entriesModified( 1 );
        d_needClear = false;
    }

    RenderTarget::deactivate();
}

//----------------------------------------------------------------------------//

void OgreRenderTextureTarget::clear() {
    d_needClear = true;
}

void OgreRenderTextureTarget::draw(const GeometryBuffer& buffer, std::uint32_t drawModeMask)
{
    buffer.draw(drawModeMask);
}

void OgreRenderTextureTarget::draw(const RenderQueue& queue, std::uint32_t drawModeMask)
{
    queue.draw(drawModeMask);
}

//----------------------------------------------------------------------------//

Texture& OgreRenderTextureTarget::getTexture() const {
    return *d_texture;
}

bool OgreRenderTextureTarget::isImageryCache() const
{
    return d_isImageryCache;
}

OgreRenderer& OgreRenderTextureTarget::getOwner() {
    return d_owner;
}

//----------------------------------------------------------------------------//

void OgreRenderTextureTarget::updateMatrix() const
{
    if (d_owner.usesOpenGL())
        RenderTarget::updateMatrix( RenderTarget::createViewProjMatrixForOpenGL() );
    else if (d_owner.usesDirect3D())
        RenderTarget::updateMatrix( RenderTarget::createViewProjMatrixForDirect3D() );
    else
        throw RendererException("An unsupported RenderSystem is being used by Ogre. Please contact the CEGUI team.");
}

void OgreRenderTextureTarget::unprojectPoint(const GeometryBuffer& buff,
                                         const glm::vec2& p_in,
                                         glm::vec2& p_out) const
{
    if (!RenderTarget::d_matrixValid)
        updateMatrix();

    const OgreGeometryBuffer& gb = static_cast<const OgreGeometryBuffer&>(buff);

    const Ogre::Real midx = RenderTarget::d_area.getWidth() * 0.5f;
    const Ogre::Real midy = RenderTarget::d_area.getHeight() * 0.5f;

    // viewport matrix
    const Ogre::Matrix4 vpmat(
        midx,    0,    0,    RenderTarget::d_area.left() + midx,
         0,    -midy,  0,    RenderTarget::d_area.top() + midy,
         0,      0,    1,    0,
         0,      0,    0,    1
    );

    // matrices used for projecting and unprojecting points

    const Ogre::Matrix4 proj(OgreRenderer::glmToOgreMatrix(gb.getModelMatrix() * RenderTarget::d_matrix) * vpmat);
    const Ogre::Matrix4 unproj(proj.inverse());

    Ogre::Vector3 in;

    // unproject the ends of the ray
    in.x = midx;
    in.y = midy;
    in.z = -RenderTarget::d_viewDistance;
    const Ogre::Vector3 r1(unproj * in);
    in.x = p_in.x;
    in.y = p_in.y;
    in.z = 0;
    // calculate vector of picking ray
    const Ogre::Vector3 rv(r1 - unproj * in);

    // project points to orientate them with GeometryBuffer plane
    in.x = 0.0;
    in.y = 0.0;
    const Ogre::Vector3 p1(proj * in);
    in.x = 1.0;
    in.y = 0.0;
    const Ogre::Vector3 p2(proj * in);
    in.x = 0.0;
    in.y = 1.0;
    const Ogre::Vector3 p3(proj * in);

    // calculate the plane normal
    const Ogre::Vector3 pn((p2 - p1).crossProduct(p3 - p1));
    // calculate distance from origin
    const Ogre::Real plen = pn.length();
    const Ogre::Real dist = -(p1.x * (pn.x / plen) +
                              p1.y * (pn.y / plen) +
                              p1.z * (pn.z / plen));

    // calculate intersection of ray and plane
    const Ogre::Real pn_dot_rv = pn.dotProduct(rv);
    const Ogre::Real tmp = pn_dot_rv != 0.0 ?
                            (pn.dotProduct(r1) + dist) / pn_dot_rv :
                            0.0f;

    p_out.x = static_cast<float>(r1.x - rv.x * tmp);
    p_out.y = static_cast<float>(r1.y - rv.y * tmp);
}

String OgreRenderTextureTarget::generateTextureName()
{
    String tmp("_ogre_tt_tex_");
    tmp.append(PropertyHelper<std::uint32_t>::toString(s_textureNumber++));

    return tmp;
}

}

#endif // CEGUI_USE_OGRE_TEXTURE_GPU
