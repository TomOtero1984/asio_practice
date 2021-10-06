cmake_minimum_required(VERSION 3.14)

project(asio_practice)

set(CMAKE_CXX_STANDARD 17)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(asio_practice ws2_32)
include_directories(${CMAKE_SOURCE_DIR}/library/asio)
include_directories(${CMAKE_SOURCE_DIR}/library/asio/include)
