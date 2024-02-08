cmake_minimum_required(VERSION 3.25)

project(rpg-text-game)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

file(GLOB_RECURSE SOURCES ${SRC_DIR}/*.cpp ${SRC_DIR}/**/*.cpp ${CMAKE_SOURCE_DIR}/main.cpp)
file(GLOB_RECURSE HEADERS ${INCLUDE_DIR}/*.h ${INCLUDE_DIR}/**/*.h)

include_directories(${INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
