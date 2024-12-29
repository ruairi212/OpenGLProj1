#include <GLFW/glfw3.h>
#include <stdio.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
   
    window = glfwCreateWindow(640, 480, "erm", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    glViewport(0, 0, width, height);
    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(-0.5f, -0.5f); // Red
        glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(0.0f, 0.5f);   // Green
        glColor3f(0.0f, 0.0f, 1.0f); glVertex2f(0.5f, -0.5f);  // Blue
        glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();

 
    }

    glfwTerminate();
    return 0;
}