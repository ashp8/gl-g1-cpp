#include <iostream>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow  *window;

    if(!glfwInit()){
        exit(EXIT_FAILURE);
    }
    window = glfwCreateWindow(640, 480, "Example", NULL, NULL);
    if(!window){
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    while(!glfwWindowShouldClose(window)){
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
    return 0;
}
