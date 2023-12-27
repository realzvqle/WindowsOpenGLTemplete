#include "header/input.h"


void checkIfQuit(window* window){
    if(glfwGetKey(window->window, GLFW_KEY_ESCAPE) == GLFW_PRESS) glfwSetWindowShouldClose(window->window, TRUE);
}

void changeColor(window* window){
    if(glfwGetKey(window->window, GLFW_KEY_W) == GLFW_PRESS) glClearColor(0.2f, 1.0f, 0.3f, 1.0f);
    if(glfwGetKey(window->window, GLFW_KEY_Q) == GLFW_PRESS) glClearColor(0.2f, 0.1f, 0.3f, 1.0f);
}