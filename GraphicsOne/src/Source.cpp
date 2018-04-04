#include "GLFW/glfw3.h"


int main(void)
{
	GLFWwindow* window;

	if (!glfwInit()) return -1;

	window = glfwCreateWindow(640, 480, "GraphicsOne_x64", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	
	}

	glfwMakeContextCurrent(window);
	
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5, -0.5);
		glVertex2f(0.0, 0.5); 
		glVertex2f(0.5, -0.5); 
		glEnd();


		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();
}
