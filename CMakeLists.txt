cmake_minimum_required(VERSION 3.20)
project(mycli)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 编译警告
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-Wall -Wextra -Werror)
endif()

include_directories(include)
include_directories(third_party)

file(GLOB SRC
    src/*.cpp
    src/platform/*.cpp
)

add_executable(mycli ${SRC})
