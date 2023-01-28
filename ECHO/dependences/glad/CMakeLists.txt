cmake_minimum_required(VERSION 3.25)
project(GLAD LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)


add_library(${PROJECT_NAME}
  src/glad.c
)


target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)