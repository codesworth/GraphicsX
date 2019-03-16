//
//  main.cpp
//  Hyllyce
//
//  Created by Shadrach Mensah on 15/03/2019.
//  Copyright © 2019 Shadrach Mensah. All rights reserved.
//

#include <iostream>
#include "GL/glew.h"
#include "GLFW/glfw3.h"

void init(GLFWwindow * window){}

void display(GLFWwindow* window, double currenttime){
    glClearColor(1.9, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
}

int main(int argc, const char * argv[]) {
    
    if (!glfwInit()) { exit(EXIT_FAILURE);}
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    GLFWwindow* window = glfwCreateWindow(600, 600, "Hyllyce",glfwGetPrimaryMonitor(), GLFWwindow *share)
    glfwMakeContextCurrent(window);
    
    if (glewInit() != GLEW_OK) { exit(EXIT_FAILURE);}
    
    glfwSwapInterval(1);
    
    init(window);
    
    while (!glfwWindowShouldClose(window)) {
        display(window, glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
        
        
    }
    
    glfwDestroyWindow(window);
    
    glfwTerminate();
    
    exit(EXIT_SUCCESS);
    
}
