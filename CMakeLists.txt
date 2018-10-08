cmake_minimum_required(VERSION 2.6)
project(MYENGINE)

include_directories(src)

add_executable(sandbox
  src/sandbox/main.cpp
)

add_library(myengine
src/myengine/Entity.cpp
src/myengine/Entity.h
src/myengine/Component.cpp
src/myengine/Component.h
)

target_link_libraries(sandbox myengine)