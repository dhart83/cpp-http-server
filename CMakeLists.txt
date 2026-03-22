cmake_minimum_required(VERSION 3.23)

project(cpp_http_server LANGUAGES CXX)

add_executable(cpp_http_server
    src/main.cpp
)

target_compile_features(cpp_http_server PRIVATE cxx_std_20)

# Default to Debug for single-config generators unless something else is chosen.
if(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

# Optional toggle for warnings-as-errors.
option(ENABLE_WERROR "Treat compiler warnings as errors" OFF)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(cpp_http_server PRIVATE
        -Wall
        -Wextra
        -Wpedantic
        $<$<BOOL:${ENABLE_WERROR}>:-Werror>
    )
endif()