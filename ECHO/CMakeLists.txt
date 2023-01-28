cmake_minimum_required(VERSION 3.25)
project(ECHO LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)


add_subdirectory(dependences/glm)
add_subdirectory(dependences/glad)


find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(glfw3 REQUIRED)


add_library(${PROJECT_NAME}
  src/echo.cpp
)


target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        GLAD
        glm
        GLUT::GLUT
        OpenGL::OpenGL
        glfw

    PRIVATE
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        GLAD
        glm
        OpenGL::OpenGL
        GLUT::GLUT
        glfw

    PRIVATE
        
)