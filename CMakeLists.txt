cmake_minimum_required(VERSION 2.6)
project(MYENGINE)

add_executable(sandbox
  src/sandbox/main.cpp
)

add_library(myengine
src/myengine/Entity.cpp
)