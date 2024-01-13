#include <graphic.h>

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

int initialisation_OpenGL(){
	if (!glfwInit())
    {
        cout << "Failed to initialize GLFW" << endl;
        return -1;
    }

    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	return 0;
}	

void closeOpenGl(){
	glfwTerminate();
}

GLFWwindow* creerFenetre(int largeur, int hauteur, const char* titre, GLFWmonitor* moniteur, GLFWwindow* fenetrePartagee){
	GLFWwindow* window = glfwCreateWindow(largeur, hauteur, titre, moniteur, fenetrePartagee);
	if(window == NULL){
		cout << "Failed to open GLFW window" << endl;
		glfwTerminate();
		return NULL;
	}
	return window;
}


int graph1()
{
	GLFWwindow* window = glfwCreateWindow(800, 600, "Monde", NULL, NULL);
	if (window == NULL)
	{
		cout << "Failed to open GLFW window" << endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		cout << "Failed to initialize GLAD" << endl;
		return -1;
	}

	glViewport(0, 0, 800, 600);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	while (!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

