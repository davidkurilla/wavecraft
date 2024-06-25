cmake_minimum_required(VERSION 3.20)

set(project_target WaveCraft)

project(
    ${project_target}
    VERSION 1.0
    LANGUAGES C CXX
)

file(GLOB src_files
    ${PROJECT_SOURCE_DIR}/src/*.c
    ${PROJECT_SOURCE_DIR}/src/*.cpp    
)

add_executable(
    ${project_target}
    WIN32
    ${src_files}
)

target_link_libraries(${project_target} opengl32)

target_include_directories(${project_target} PUBLIC
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/src
)