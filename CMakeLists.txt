cmake_minimum_required(VERSION 3.10)

project(AP4A)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AP4A
    src/main.cpp
    src/class/Scheduler.cpp
    src/class/Sensor.cpp
    src/class/Server.cpp
)

target_include_directories(AP4A PRIVATE
    include
)
