cmake_minimum_required(VERSION 3.20.0)
include($ENV{ZMK_DIR}/config.cmake)

project(GeminiMediaPlayer3)

# Tell CMake where overlays and configs live
set(CONF_FILE "${CMAKE_CURRENT_SOURCE_DIR}/config/prj.conf")

add_subdirectory(src)
add_subdirectory(keymap)
