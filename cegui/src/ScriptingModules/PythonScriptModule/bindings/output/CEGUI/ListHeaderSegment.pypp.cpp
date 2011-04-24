// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ListHeaderSegment.pypp.hpp"

namespace bp = boost::python;

struct ListHeaderSegment_wrapper : CEGUI::ListHeaderSegment, bp::wrapper< CEGUI::ListHeaderSegment > {

    ListHeaderSegment_wrapper(::CEGUI::String const & type, ::CEGUI::String const & name )
    : CEGUI::ListHeaderSegment( boost::ref(type), boost::ref(name) )
      , bp::wrapper< CEGUI::ListHeaderSegment >(){
        // constructor
    
    }

    virtual void beginInitialisation(  ) {
        if( bp::override func_beginInitialisation = this->get_override( "beginInitialisation" ) )
            func_beginInitialisation(  );
        else{
            this->CEGUI::Window::beginInitialisation(  );
        }
    }
    
    void default_beginInitialisation(  ) {
        CEGUI::Window::beginInitialisation( );
    }

    virtual void cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_cloneChildWidgetsTo = this->get_override( "cloneChildWidgetsTo" ) )
            func_cloneChildWidgetsTo( boost::ref(target) );
        else{
            this->CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
        }
    }
    
    void default_cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
    }

    virtual void clonePropertiesTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_clonePropertiesTo = this->get_override( "clonePropertiesTo" ) )
            func_clonePropertiesTo( boost::ref(target) );
        else{
            this->CEGUI::Window::clonePropertiesTo( boost::ref(target) );
        }
    }
    
    void default_clonePropertiesTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::clonePropertiesTo( boost::ref(target) );
    }

    virtual void destroy(  ) {
        if( bp::override func_destroy = this->get_override( "destroy" ) )
            func_destroy(  );
        else{
            this->CEGUI::Window::destroy(  );
        }
    }
    
    void default_destroy(  ) {
        CEGUI::Window::destroy( );
    }

    virtual void endInitialisation(  ) {
        if( bp::override func_endInitialisation = this->get_override( "endInitialisation" ) )
            func_endInitialisation(  );
        else{
            this->CEGUI::Window::endInitialisation(  );
        }
    }
    
    void default_endInitialisation(  ) {
        CEGUI::Window::endInitialisation( );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    virtual void getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        if( bp::override func_getRenderingContext_impl = this->get_override( "getRenderingContext_impl" ) )
            func_getRenderingContext_impl( boost::ref(ctx) );
        else{
            this->CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
        }
    }
    
    void default_getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
    }

    virtual ::CEGUI::Rectf getUnclippedInnerRect_impl(  ) const  {
        if( bp::override func_getUnclippedInnerRect_impl = this->get_override( "getUnclippedInnerRect_impl" ) )
            return func_getUnclippedInnerRect_impl(  );
        else{
            return this->CEGUI::Window::getUnclippedInnerRect_impl(  );
        }
    }
    
    ::CEGUI::Rectf default_getUnclippedInnerRect_impl(  ) const  {
        return CEGUI::Window::getUnclippedInnerRect_impl( );
    }

    virtual void initialiseComponents(  ) {
        if( bp::override func_initialiseComponents = this->get_override( "initialiseComponents" ) )
            func_initialiseComponents(  );
        else{
            this->CEGUI::Window::initialiseComponents(  );
        }
    }
    
    void default_initialiseComponents(  ) {
        CEGUI::Window::initialiseComponents( );
    }

    virtual bool isHit( ::CEGUI::Vector2f const & position, bool const allow_disabled=false ) const  {
        if( bp::override func_isHit = this->get_override( "isHit" ) )
            return func_isHit( boost::ref(position), allow_disabled );
        else{
            return this->CEGUI::Window::isHit( boost::ref(position), allow_disabled );
        }
    }
    
    bool default_isHit( ::CEGUI::Vector2f const & position, bool const allow_disabled=false ) const  {
        return CEGUI::Window::isHit( boost::ref(position), allow_disabled );
    }

    virtual void performChildWindowLayout(  ) {
        if( bp::override func_performChildWindowLayout = this->get_override( "performChildWindowLayout" ) )
            func_performChildWindowLayout(  );
        else{
            this->CEGUI::Window::performChildWindowLayout(  );
        }
    }
    
    void default_performChildWindowLayout(  ) {
        CEGUI::Window::performChildWindowLayout( );
    }

    virtual void setLookNFeel( ::CEGUI::String const & look ) {
        if( bp::override func_setLookNFeel = this->get_override( "setLookNFeel" ) )
            func_setLookNFeel( boost::ref(look) );
        else{
            this->CEGUI::Window::setLookNFeel( boost::ref(look) );
        }
    }
    
    void default_setLookNFeel( ::CEGUI::String const & look ) {
        CEGUI::Window::setLookNFeel( boost::ref(look) );
    }

    virtual void setMargin( ::CEGUI::UBox const & margin ) {
        if( bp::override func_setMargin = this->get_override( "setMargin" ) )
            func_setMargin( boost::ref(margin) );
        else{
            this->CEGUI::Window::setMargin( boost::ref(margin) );
        }
    }
    
    void default_setMargin( ::CEGUI::UBox const & margin ) {
        CEGUI::Window::setMargin( boost::ref(margin) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

    virtual void update( float elapsed ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( elapsed );
        else{
            this->CEGUI::Window::update( elapsed );
        }
    }
    
    void default_update( float elapsed ) {
        CEGUI::Window::update( elapsed );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_ListHeaderSegment_class(){

    { //::CEGUI::ListHeaderSegment
        typedef bp::class_< ListHeaderSegment_wrapper, bp::bases< CEGUI::Window >, boost::noncopyable > ListHeaderSegment_exposer_t;
        ListHeaderSegment_exposer_t ListHeaderSegment_exposer = ListHeaderSegment_exposer_t( "ListHeaderSegment", "*!\n\
        \n\
           Base class for list header segment window\n\
        *\n", bp::init< CEGUI::String const &, CEGUI::String const & >(( bp::arg("type"), bp::arg("name") ), "*************************************************************************\n\
           Construction & Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
           Constructor for list header segment base class\n\
        *\n") );
        bp::scope ListHeaderSegment_scope( ListHeaderSegment_exposer );
        bp::enum_< CEGUI::ListHeaderSegment::SortDirection>("SortDirection")
            .value("None", CEGUI::ListHeaderSegment::None)
            .value("Ascending", CEGUI::ListHeaderSegment::Ascending)
            .value("Descending", CEGUI::ListHeaderSegment::Descending)
            .export_values()
            ;
        { //::CEGUI::ListHeaderSegment::getDragMoveOffset
        
            typedef ::CEGUI::Vector2f const & ( ::CEGUI::ListHeaderSegment::*getDragMoveOffset_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "getDragMoveOffset"
                , getDragMoveOffset_function_type( &::CEGUI::ListHeaderSegment::getDragMoveOffset )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
               \n\
                  Return the current drag move position offset (in pixels relative to the top-left corner of the\
                  segment).\n\
            \n\
               @return\n\
                  Point object describing the drag move offset position.\n\
               *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::getMovingCursorImage
        
            typedef ::CEGUI::Image const * ( ::CEGUI::ListHeaderSegment::*getMovingCursorImage_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "getMovingCursorImage"
                , getMovingCursorImage_function_type( &::CEGUI::ListHeaderSegment::getMovingCursorImage )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::ListHeaderSegment::getSizingCursorImage
        
            typedef ::CEGUI::Image const * ( ::CEGUI::ListHeaderSegment::*getSizingCursorImage_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "getSizingCursorImage"
                , getSizingCursorImage_function_type( &::CEGUI::ListHeaderSegment::getSizingCursorImage )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::ListHeaderSegment::getSortDirection
        
            typedef ::CEGUI::ListHeaderSegment::SortDirection ( ::CEGUI::ListHeaderSegment::*getSortDirection_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "getSortDirection"
                , getSortDirection_function_type( &::CEGUI::ListHeaderSegment::getSortDirection )
                , "*!\n\
               \n\
                  Return the current sort direction set for this segment.\n\
            \n\
                  Note that this has no impact on the way the segment functions (aside from the possibility\n\
                  of varied rendering).  This is intended as a 'helper setting' to classes that make use of\n\
                  the ListHeaderSegment objects.\n\
            \n\
               @return\n\
                  One of the SortDirection enumerated values indicating the current sort direction set for\
                  this\n\
                  segment.\n\
               *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::isBeingDragMoved
        
            typedef bool ( ::CEGUI::ListHeaderSegment::*isBeingDragMoved_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "isBeingDragMoved"
                , isBeingDragMoved_function_type( &::CEGUI::ListHeaderSegment::isBeingDragMoved )
                , "*!\n\
            \n\
                Return whether the segment is currently being drag-moved.\n\
            *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::isBeingDragSized
        
            typedef bool ( ::CEGUI::ListHeaderSegment::*isBeingDragSized_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "isBeingDragSized"
                , isBeingDragSized_function_type( &::CEGUI::ListHeaderSegment::isBeingDragSized )
                , "*!\n\
            \n\
                Return whether the segment is currently being drag-moved.\n\
            *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::isClickable
        
            typedef bool ( ::CEGUI::ListHeaderSegment::*isClickable_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "isClickable"
                , isClickable_function_type( &::CEGUI::ListHeaderSegment::isClickable )
                , "*!\n\
               \n\
                  Return whether the segment is clickable.\n\
            \n\
               @return\n\
                  true if the segment can be clicked, false of the segment can not be clicked (so no\
                  highlighting or events will happen).\n\
               *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::isDragMovingEnabled
        
            typedef bool ( ::CEGUI::ListHeaderSegment::*isDragMovingEnabled_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "isDragMovingEnabled"
                , isDragMovingEnabled_function_type( &::CEGUI::ListHeaderSegment::isDragMovingEnabled )
                , "*!\n\
               \n\
                  Return whether drag moving is enabled for this segment.\n\
            \n\
               @return\n\
                  true if the segment can be drag moved, false if the segment can not be drag moved.\n\
               *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::isSegmentHovering
        
            typedef bool ( ::CEGUI::ListHeaderSegment::*isSegmentHovering_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "isSegmentHovering"
                , isSegmentHovering_function_type( &::CEGUI::ListHeaderSegment::isSegmentHovering )
                , "*!\n\
            \n\
                Return whether the segment is currently in its hovering state.\n\
            *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::isSegmentPushed
        
            typedef bool ( ::CEGUI::ListHeaderSegment::*isSegmentPushed_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "isSegmentPushed"
                , isSegmentPushed_function_type( &::CEGUI::ListHeaderSegment::isSegmentPushed )
                , "*!\n\
            \n\
                Return whether the segment is currently in its pushed state.\n\
            *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::isSizingEnabled
        
            typedef bool ( ::CEGUI::ListHeaderSegment::*isSizingEnabled_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "isSizingEnabled"
                , isSizingEnabled_function_type( &::CEGUI::ListHeaderSegment::isSizingEnabled )
                , "*************************************************************************\n\
                  Accessor Methods\n\
               *************************************************************************\n\
               *!\n\
               \n\
                  Return whether this segment can be sized.\n\
            \n\
               @return\n\
                  true if the segment can be horizontally sized, false if the segment can not be horizontally\
                  sized.\n\
               *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::isSplitterHovering
        
            typedef bool ( ::CEGUI::ListHeaderSegment::*isSplitterHovering_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "isSplitterHovering"
                , isSplitterHovering_function_type( &::CEGUI::ListHeaderSegment::isSplitterHovering )
                , "*!\n\
            \n\
                Return whether the splitter is currently in its hovering state.\n\
            *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::setClickable
        
            typedef void ( ::CEGUI::ListHeaderSegment::*setClickable_function_type )( bool ) ;
            
            ListHeaderSegment_exposer.def( 
                "setClickable"
                , setClickable_function_type( &::CEGUI::ListHeaderSegment::setClickable )
                , ( bp::arg("setting") )
                , "*!\n\
               \n\
                  Set whether the segment is clickable.\n\
            \n\
               @param setting\n\
                  true if the segment may be clicked, false of the segment may not be clicked (so no\
                  highlighting or events will happen).\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::setDragMovingEnabled
        
            typedef void ( ::CEGUI::ListHeaderSegment::*setDragMovingEnabled_function_type )( bool ) ;
            
            ListHeaderSegment_exposer.def( 
                "setDragMovingEnabled"
                , setDragMovingEnabled_function_type( &::CEGUI::ListHeaderSegment::setDragMovingEnabled )
                , ( bp::arg("setting") )
                , "*!\n\
               \n\
                  Set whether drag moving is allowed for this segment.\n\
            \n\
               @param setting\n\
                  true if the segment may be drag moved, false if the segment may not be drag moved.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::setMovingCursorImage
        
            typedef void ( ::CEGUI::ListHeaderSegment::*setMovingCursorImage_function_type )( ::CEGUI::Image const * ) ;
            
            ListHeaderSegment_exposer.def( 
                "setMovingCursorImage"
                , setMovingCursorImage_function_type( &::CEGUI::ListHeaderSegment::setMovingCursorImage )
                , ( bp::arg("image") ) );
        
        }
        { //::CEGUI::ListHeaderSegment::setMovingCursorImage
        
            typedef void ( ::CEGUI::ListHeaderSegment::*setMovingCursorImage_function_type )( ::CEGUI::String const & ) ;
            
            ListHeaderSegment_exposer.def( 
                "setMovingCursorImage"
                , setMovingCursorImage_function_type( &::CEGUI::ListHeaderSegment::setMovingCursorImage )
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::ListHeaderSegment::setSizingCursorImage
        
            typedef void ( ::CEGUI::ListHeaderSegment::*setSizingCursorImage_function_type )( ::CEGUI::Image const * ) ;
            
            ListHeaderSegment_exposer.def( 
                "setSizingCursorImage"
                , setSizingCursorImage_function_type( &::CEGUI::ListHeaderSegment::setSizingCursorImage )
                , ( bp::arg("image") ) );
        
        }
        { //::CEGUI::ListHeaderSegment::setSizingCursorImage
        
            typedef void ( ::CEGUI::ListHeaderSegment::*setSizingCursorImage_function_type )( ::CEGUI::String const & ) ;
            
            ListHeaderSegment_exposer.def( 
                "setSizingCursorImage"
                , setSizingCursorImage_function_type( &::CEGUI::ListHeaderSegment::setSizingCursorImage )
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::ListHeaderSegment::setSizingEnabled
        
            typedef void ( ::CEGUI::ListHeaderSegment::*setSizingEnabled_function_type )( bool ) ;
            
            ListHeaderSegment_exposer.def( 
                "setSizingEnabled"
                , setSizingEnabled_function_type( &::CEGUI::ListHeaderSegment::setSizingEnabled )
                , ( bp::arg("setting") )
                , "*************************************************************************\n\
                  Manipulator Methods\n\
               *************************************************************************\n\
               *!\n\
               \n\
                  Set whether this segment can be sized.\n\
            \n\
               @param setting\n\
                  true if the segment may be horizontally sized, false if the segment may not be horizontally\
                  sized.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ListHeaderSegment::setSortDirection
        
            typedef void ( ::CEGUI::ListHeaderSegment::*setSortDirection_function_type )( ::CEGUI::ListHeaderSegment::SortDirection ) ;
            
            ListHeaderSegment_exposer.def( 
                "setSortDirection"
                , setSortDirection_function_type( &::CEGUI::ListHeaderSegment::setSortDirection )
                , ( bp::arg("sort_dir") )
                , "*!\n\
               \n\
                  Set the current sort direction set for this segment.\n\
            \n\
                  Note that this has no impact on the way the segment functions (aside from the possibility\n\
                  of varied rendering).  This is intended as a 'helper setting' to classes that make use of\n\
                  the ListHeaderSegment objects.\n\
            \n\
               @param sort_dir\n\
                  One of the SortDirection enumerated values indicating the current sort direction set for\
                  this\n\
                  segment.\n\
            \n\
               @return\n\
                  Nothing\n\
               *\n" );
        
        }
        ListHeaderSegment_exposer.def_readonly( "DefaultSizingArea", CEGUI::ListHeaderSegment::DefaultSizingArea, "Defaults\n" );
        ListHeaderSegment_exposer.add_static_property( "EventClickableSettingChanged"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventClickableSettingChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventMovableSettingChanged"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventMovableSettingChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventSegmentClicked"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventSegmentClicked
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventSegmentDragPositionChanged"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventSegmentDragPositionChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventSegmentDragStart"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventSegmentDragStart
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventSegmentDragStop"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventSegmentDragStop
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventSegmentSized"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventSegmentSized
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventSizingSettingChanged"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventSizingSettingChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventSortDirectionChanged"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventSortDirectionChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.add_static_property( "EventSplitterDoubleClicked"
                        , bp::make_getter( &CEGUI::ListHeaderSegment::EventSplitterDoubleClicked
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ListHeaderSegment_exposer.def_readonly( "SegmentMoveThreshold", CEGUI::ListHeaderSegment::SegmentMoveThreshold, "Defaults\n" );
        { //::CEGUI::Window::beginInitialisation
        
            typedef void ( ::CEGUI::Window::*beginInitialisation_function_type )(  ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_beginInitialisation_function_type )(  ) ;
            
            ListHeaderSegment_exposer.def( 
                "beginInitialisation"
                , beginInitialisation_function_type(&::CEGUI::Window::beginInitialisation)
                , default_beginInitialisation_function_type(&ListHeaderSegment_wrapper::default_beginInitialisation) );
        
        }
        { //::CEGUI::Window::cloneChildWidgetsTo
        
            typedef void ( ::CEGUI::Window::*cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( ListHeaderSegment_wrapper::*default_cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            
            ListHeaderSegment_exposer.def( 
                "cloneChildWidgetsTo"
                , cloneChildWidgetsTo_function_type(&::CEGUI::Window::cloneChildWidgetsTo)
                , default_cloneChildWidgetsTo_function_type(&ListHeaderSegment_wrapper::default_cloneChildWidgetsTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::clonePropertiesTo
        
            typedef void ( ::CEGUI::Window::*clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( ListHeaderSegment_wrapper::*default_clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            
            ListHeaderSegment_exposer.def( 
                "clonePropertiesTo"
                , clonePropertiesTo_function_type(&::CEGUI::Window::clonePropertiesTo)
                , default_clonePropertiesTo_function_type(&ListHeaderSegment_wrapper::default_clonePropertiesTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::destroy
        
            typedef void ( ::CEGUI::Window::*destroy_function_type )(  ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_destroy_function_type )(  ) ;
            
            ListHeaderSegment_exposer.def( 
                "destroy"
                , destroy_function_type(&::CEGUI::Window::destroy)
                , default_destroy_function_type(&ListHeaderSegment_wrapper::default_destroy) );
        
        }
        { //::CEGUI::Window::endInitialisation
        
            typedef void ( ::CEGUI::Window::*endInitialisation_function_type )(  ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_endInitialisation_function_type )(  ) ;
            
            ListHeaderSegment_exposer.def( 
                "endInitialisation"
                , endInitialisation_function_type(&::CEGUI::Window::endInitialisation)
                , default_endInitialisation_function_type(&ListHeaderSegment_wrapper::default_endInitialisation) );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            ListHeaderSegment_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&ListHeaderSegment_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::Window::getRenderedStringParser
        
            typedef ::CEGUI::RenderedStringParser & ( ::CEGUI::Window::*getRenderedStringParser_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "getRenderedStringParser"
                , getRenderedStringParser_function_type(&::CEGUI::Window::getRenderedStringParser)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Window::getRenderingContext_impl
        
            typedef void ( ::CEGUI::Window::*getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            typedef void ( ListHeaderSegment_wrapper::*default_getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            
            ListHeaderSegment_exposer.def( 
                "getRenderingContext_impl"
                , getRenderingContext_impl_function_type(&::CEGUI::Window::getRenderingContext_impl)
                , default_getRenderingContext_impl_function_type(&ListHeaderSegment_wrapper::default_getRenderingContext_impl)
                , ( bp::arg("ctx") ) );
        
        }
        { //::CEGUI::Window::getUnclippedInnerRect_impl
        
            typedef ::CEGUI::Rectf ( ::CEGUI::Window::*getUnclippedInnerRect_impl_function_type )(  ) const;
            typedef ::CEGUI::Rectf ( ListHeaderSegment_wrapper::*default_getUnclippedInnerRect_impl_function_type )(  ) const;
            
            ListHeaderSegment_exposer.def( 
                "getUnclippedInnerRect_impl"
                , getUnclippedInnerRect_impl_function_type(&::CEGUI::Window::getUnclippedInnerRect_impl)
                , default_getUnclippedInnerRect_impl_function_type(&ListHeaderSegment_wrapper::default_getUnclippedInnerRect_impl) );
        
        }
        { //::CEGUI::Window::initialiseComponents
        
            typedef void ( ::CEGUI::Window::*initialiseComponents_function_type )(  ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_initialiseComponents_function_type )(  ) ;
            
            ListHeaderSegment_exposer.def( 
                "initialiseComponents"
                , initialiseComponents_function_type(&::CEGUI::Window::initialiseComponents)
                , default_initialiseComponents_function_type(&ListHeaderSegment_wrapper::default_initialiseComponents) );
        
        }
        { //::CEGUI::Window::isHit
        
            typedef bool ( ::CEGUI::Window::*isHit_function_type )( ::CEGUI::Vector2f const &,bool const ) const;
            typedef bool ( ListHeaderSegment_wrapper::*default_isHit_function_type )( ::CEGUI::Vector2f const &,bool const ) const;
            
            ListHeaderSegment_exposer.def( 
                "isHit"
                , isHit_function_type(&::CEGUI::Window::isHit)
                , default_isHit_function_type(&ListHeaderSegment_wrapper::default_isHit)
                , ( bp::arg("position"), bp::arg("allow_disabled")=(bool const)(false) ) );
        
        }
        { //::CEGUI::Window::performChildWindowLayout
        
            typedef void ( ::CEGUI::Window::*performChildWindowLayout_function_type )(  ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_performChildWindowLayout_function_type )(  ) ;
            
            ListHeaderSegment_exposer.def( 
                "performChildWindowLayout"
                , performChildWindowLayout_function_type(&::CEGUI::Window::performChildWindowLayout)
                , default_performChildWindowLayout_function_type(&ListHeaderSegment_wrapper::default_performChildWindowLayout) );
        
        }
        { //::CEGUI::Window::setLookNFeel
        
            typedef void ( ::CEGUI::Window::*setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            
            ListHeaderSegment_exposer.def( 
                "setLookNFeel"
                , setLookNFeel_function_type(&::CEGUI::Window::setLookNFeel)
                , default_setLookNFeel_function_type(&ListHeaderSegment_wrapper::default_setLookNFeel)
                , ( bp::arg("look") ) );
        
        }
        { //::CEGUI::Window::setMargin
        
            typedef void ( ::CEGUI::Window::*setMargin_function_type )( ::CEGUI::UBox const & ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_setMargin_function_type )( ::CEGUI::UBox const & ) ;
            
            ListHeaderSegment_exposer.def( 
                "setMargin"
                , setMargin_function_type(&::CEGUI::Window::setMargin)
                , default_setMargin_function_type(&ListHeaderSegment_wrapper::default_setMargin)
                , ( bp::arg("margin") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ListHeaderSegment_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            ListHeaderSegment_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&ListHeaderSegment_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ListHeaderSegment_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            ListHeaderSegment_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&ListHeaderSegment_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::Window::update
        
            typedef void ( ::CEGUI::Window::*update_function_type )( float ) ;
            typedef void ( ListHeaderSegment_wrapper::*default_update_function_type )( float ) ;
            
            ListHeaderSegment_exposer.def( 
                "update"
                , update_function_type(&::CEGUI::Window::update)
                , default_update_function_type(&ListHeaderSegment_wrapper::default_update)
                , ( bp::arg("elapsed") ) );
        
        }
        { //::CEGUI::Window::writeXMLToStream
        
            typedef void ( ::CEGUI::Window::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( ListHeaderSegment_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            ListHeaderSegment_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Window::writeXMLToStream)
                , default_writeXMLToStream_function_type(&ListHeaderSegment_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}
