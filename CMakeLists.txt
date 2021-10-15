cmake_minimum_required(VERSION 3.14)

project(asio_practice)

set(CMAKE_CPP_STANDARD 20)
set(THREADS_PREFER_PTHREAD_FLAG ON)
set(TOOLCHAIN_PREFIX x86_64-w64-mingw32)
set(CMAKE_C_COMPILER $ENV{x86_64-w64-mingw32_path}${TOOLCHAIN_PREFIX}-gcc.exe)
# set(CMAKE_CXX_COMPILER $ENV{x86_64-w64-mingw32_path}${TOOLCHAIN_PREFIX}-g++.exe)
set(CMAKE_RC_COMPILER $ENV{x86_64-w64-mingw32_path}${TOOLCHAIN_PREFIX}-windres.exe)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


find_package(Threads REQUIRED)

add_subdirectory(${CMAKE_SOURCE_DIR}/include/json)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} ws2_32 nlohmann_json::nlohmann_json Threads::Threads)
include_directories(${CMAKE_SOURCE_DIR}/include/asio)
include_directories(${CMAKE_SOURCE_DIR}/include/asio/include)
