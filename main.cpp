#include <iostream>
#include "adder.h"
#include <GLFW/glfw3.h>

int main(){
    std::cout<<"Fucco wacco \n"<<add(420.0f,360.0f)<<std::endl;

    GLFWwindow *window;
    if(!glfwInit())
    {
        fprintf(stderr,"Failed to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }
    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    return 0;
}