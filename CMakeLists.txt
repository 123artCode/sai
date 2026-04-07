cmake_minimum_required(VERSION 3.10)
project(sai VERSION 1.0.0 LANGUAGES CXX)

# Default to release builds
if(NOT CMAKE_BUILD_TYPE)
   set(CMAKE_BUILD_TYPE Release)
endif()

find_package(SFML 2.6 COMPONENTS graphics window system audio REQUIRED)

add_executable(sai src/Main.cpp)

target_link_libraries(sai PRIVATE sfml-graphics sfml-window sfml-system sfml-audio)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/res DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
