cmake_minimum_required(VERSION 3.14)

project(asio_practice)

set(CMAKE_CPP_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} ws2_32)
include_directories(${CMAKE_SOURCE_DIR}/library/asio)
include_directories(${CMAKE_SOURCE_DIR}/library/asio/include)
