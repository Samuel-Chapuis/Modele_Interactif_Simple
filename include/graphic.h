#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std; 

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
int initialisation_OpenGL();
void closeOpenGl();
GLFWwindow* creerFenetre(int largeur, int hauteur, const char* titre, GLFWmonitor* moniteur=NULL, GLFWwindow* fenetrePartagee=NULL);
int graph1();

#endif