cmake_minimum_required(VERSION 3.22)
project(CppCourse2024Seminars)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES_SEM_12
        sem-12/template.cpp
        sem-12/matrix.cpp
        sem-12/matrix.h
        sem-12/main.cpp
)

add_executable(sem-12 ${SOURCES_SEM_12})