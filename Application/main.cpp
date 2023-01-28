#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>


int main()
{
    // initialize glfw
    glfwInit();
    // setup glfw by giving it version of opengl and the profile of opengl to use.
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // create glfw window object
    GLFWwindow *window = glfwCreateWindow(600, 600, "__sage__", nullptr, nullptr);
    if (window == nullptr) {
        std::cout << "Failed to create window" << std::endl;
        glfwTerminate();
        return -1;
    }
    // the window current
    glfwMakeContextCurrent(window);
    // load glad
    gladLoadGL();
    // tell opengl the window viewport
    glViewport(0, 0, 600, 600);

    glClearColor(0.07f, 0.13f ,0.17f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    // swap buffers
    glfwSwapBuffers(window);

    // Keep window open and process events(poll) until window should close
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    // Destroy window object befor program ends.
    glfwDestroyWindow(window);
    // terminate glfw
    glfwTerminate();

    return 0;
}