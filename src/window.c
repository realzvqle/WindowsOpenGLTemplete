#include "header/window.h"




void framebuffsize(GLFWwindow* window, int width, int height){
    glViewport(0, 0, width, height);
}


BOOL createWindow(window* window){
    BOOL checkIfGone = FALSE;
    float add = 0.0f;
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window->x = 800;
    window->y = 600;
    window->window = glfwCreateWindow(window->x, window->y, "Voxel Engine", NULL, NULL);

    if(window->window == NULL){
        fail("Failed Initilizing Window\n");
        glfwTerminate();
        return FALSE;
    }
    pass("Initilized Window!\n");

    glfwMakeContextCurrent(window->window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        fail("Couldn't Load GLAD\n");
        return -1;
    }
    pass("Loaded GLAD\n");

    glViewport(0, 0, window->x, window->y);
    glfwSetFramebufferSizeCallback(window->window, framebuffsize);
    vec3 pos;
    pos.x = 0.1f;
    pos.y = 0.4f;
    pos.z = 0.0f;

    pass("Loaded Window\n");
    while(!glfwWindowShouldClose(window->window)){
        checkIfQuit(window);
        changeColor(window);
        glClear(GL_COLOR_BUFFER_BIT);
        //drawTriangle();
        // drawSquare(window, &pos);
        // if(!checkIfGone) pos.x += 0.005;
        // else pos.x -= 0.005;
        // // printf("Current Postition %f\n", add);
        //  if(pos.x >= 2.629998){
        //      checkIfGone = TRUE;
        // }
        // else if(pos.x <= -2.629998){
        //      checkIfGone = FALSE;
        // }
        glfwPollEvents();
        glfwSwapBuffers(window->window);
        
    }

    glfwTerminate();
    return 0;


}