#include<stdio.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

//Window
GLFWwindow* window;
const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;
//Window

//create window
void initWindow(){
  printf("creating the window\n");

  glfwInit();

  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
  window = glfwCreateWindow(WIDTH,HEIGHT, "Vulkan", NULL, NULL);
}


//Init vulkan and create window
void init(){
  printf("init\n");
}

//main loop
void update(){
printf("update\n");
while (!glfwWindowShouldClose(window)) {
       glfwPollEvents();
   }
}

//destroy vk the window basicly clean the memory
void clean(){
printf("clean\n");

glfwDestroyWindow(window);
glfwTerminate();
}



//run the program
void run(){
  initWindow();
  init();
  update();
  clean();
}
