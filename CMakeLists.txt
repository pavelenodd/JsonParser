cmake_minimum_required(VERSION 3.27 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME ParserJson)

project(${PROJECT_NAME})


# Добавление исполняемого файла
add_executable(${PROJECT_NAME} src/main.cpp)

