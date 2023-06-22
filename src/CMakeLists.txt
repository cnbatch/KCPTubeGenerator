add_subdirectory(wx_ui)
add_subdirectory(others)

target_link_libraries(${PROJECT_NAME} PRIVATE WX_UI)
target_link_libraries(${PROJECT_NAME} PRIVATE OTHERS)
#target_link_libraries(${PROJECT_NAME} PRIVATE CUSTOM_WXWIDGETS)

if(wxWidgets_FOUND)
	target_link_libraries(${PROJECT_NAME} PRIVATE ${wxWidgets_LIBRARIES})
endif()

if (WIN32)
	target_link_libraries(${PROJECT_NAME} PUBLIC wsock32 ws2_32)
endif()

if (UNIX)
	target_link_libraries(${PROJECT_NAME} PUBLIC stdc++)
#	target_link_libraries(${PROJECT_NAME} PUBLIC Threads::Threads)
endif()

add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
set_property(TARGET ${PROJECT_NAME} PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
