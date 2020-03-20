#include "display.hpp"

int main(){
	// Create GLFW window
	init_window(800, 600, "Cloth");

	//callback
	glfwSetFramebufferSizeCallback(window, window_resize);
	glfwSetKeyCallback(window, window_key);
	glfwSetCursorPosCallback(window, window_cursor);
	glfwSetMouseButtonCallback(window, window_mouse);
	glfwSetScrollCallback(window, window_scroll);

	glewInit();
	glEnable(GL_DEPTH_TEST); // Depth test enable

	draw_scene();
	while(!glfwWindowShouldClose(window)){
		window_display(window);
		window_idle();
	}

	// Program termination
	delete_scene();
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}