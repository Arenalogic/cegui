set (CEGUI_TARGET_NAME ${CEGUI_DEVIL_IMAGECODEC_LIBNAME})

cegui_gather_files()
cegui_add_loadable_module(${CEGUI_TARGET_NAME} CORE_SOURCE_FILES CORE_HEADER_FILES)

message(STATUS "DevIL variables before dependency:")
message(STATUS "  IL_LIBRARIES = ${IL_LIBRARIES}")
message(STATUS "  IL_INCLUDE_DIR = ${IL_INCLUDE_DIR}")
message(STATUS "  DevIL_LIBRARIES = ${DevIL_LIBRARIES}")
message(STATUS "  DevIL_INCLUDE_DIR = ${DevIL_INCLUDE_DIR}")

cegui_add_dependency(${CEGUI_TARGET_NAME} DevIL)

cegui_target_link_libraries(${CEGUI_TARGET_NAME} ${CEGUI_BASE_LIBNAME})

