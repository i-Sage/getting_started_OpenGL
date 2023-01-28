cmake_minimum_required(VERSION 3.25)
project(Application LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)


add_executable(${PROJECT_NAME} main.cpp)


target_link_libraries(${PROJECT_NAME} ECHO)
target_include_directories(${PROJECT_NAME} PUBLIC ECHO)