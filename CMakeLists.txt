cmake_minimum_required(VERSION 3.15)

project(imgui_toggle)

add_library(${PROJECT_NAME})
find_package(imgui REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC imgui::imgui)
target_sources(${PROJECT_NAME} PRIVATE
    imgui_toggle_renderer.cpp
    imgui_toggle_presets.cpp
    imgui_toggle_palette.cpp
    imgui_toggle.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER 
"imgui_offset_rect.h;imgui_toggle.h;imgui_toggle_math.h;imgui_toggle_palette.h;imgui_toggle_presets.h;imgui_toggle_renderer.h"
)

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/imgui_toggle/
)