cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
file(GLOB SOURCE_FILES *.cpp)
set(PROJECT_HEADERS
        TemplateLinkedList.h
        )
set(PROJECT_SOURCES
        main.cpp
        )

add_executable(untitled ${PROJECT_SOURCES} ${PROJECT_HEADERS})