cmake_minimum_required(VERSION 3.20)

project(CPPLib)

set(CMAKE_CXX_STANDARD 23) # Importante para la tarea!!
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Importante para un buen autocompletado!!

set(CPPLIB_SRC 
  "${PROJECT_SOURCE_DIR}/include/geom/point.h"
  "${PROJECT_SOURCE_DIR}/include/geom/segment.h"
  "${PROJECT_SOURCE_DIR}/include/geom/figure.h"
  "${PROJECT_SOURCE_DIR}/include/geom/triangle.h"
  "${PROJECT_SOURCE_DIR}/include/geom/circle.h"
)

add_library(${PROJECT_NAME} INTERFACE ${CPPLIB_SRC})
target_include_directories(${PROJECT_NAME} INTERFACE ${PROJECT_SOURCE_DIR}/include)

include(CTest)
add_subdirectory(extern)
add_subdirectory(test)
