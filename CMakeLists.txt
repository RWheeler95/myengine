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
src/myengine/Core.cpp
src/myengine/Core.h
src/myengine/MeshRenderer.cpp
src/myengine/MeshRenderer.h
src/myengine/ShaderProgram.cpp
src/myengine/ShaderProgram.h
src/myengine/VertexArray.cpp
src/myengine/VertexArray.h
src/myengine/VertexBuffer.cpp
src/myengine/VertexBuffer.h
)

target_link_libraries(sandbox myengine)