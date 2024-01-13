#include <iostream>
#include <Windows.h>

#include <graphic.h>

using namespace std; 

int main()
{
	
    if(initialisation_OpenGL() == -1)
		return -1;
	if(creerFenetre(800, 800, "Monde") == NULL)
		return -1;

	printf("Hello World!\n");
	system("pause");

	closeOpenGl();
    return 0;
}