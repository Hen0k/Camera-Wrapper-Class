cmake_minimum_required(VERSION 3.9.1)

project(camera)

find_package(OpenCV REQUIRED)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
add_executable(Demo app.cpp)

target_link_libraries(Demo ${OpenCV_LIBS})
target_link_libraries(Demo ${OpenCV_LIBS})