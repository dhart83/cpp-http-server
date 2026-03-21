cmake_minimum_required(VERSION 3.23)

project(cpp_http_server LANGUAGES CXX)

add_executable(cpp_http_server
    src/main.cpp
)

target_compile_features(cpp_http_server PRIVATE cxx_std_20)