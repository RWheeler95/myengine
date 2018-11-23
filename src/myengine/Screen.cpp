// File includes
#include "Screen.h"

// Defines screen parameters
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

void Screen::Create()
{
	// Creates the window which is compatible with OpenGL
	window = SDL_CreateWindow("MYENGINE",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WIDTH, WINDOW_HEIGHT,
		SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

	// Creates an OpenGL rendering context within the window
	if (!SDL_GL_CreateContext(window))
	{
		// Throws exception if an error occurs
		throw std::exception();
	}

	// Initialises Glew
	if (glewInit() != GLEW_OK)
	{
		// Throws exception if an error occurs
		throw std::exception();
	}
}

void Screen::Display(GLuint programId, GLuint vaoId, int vertices)
{
	// Instructs OpenGL to set the clear colour and then clears the screen
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	// Instructs OpenGL to use the shader program and VAO
	glUseProgram(programId);
	glBindVertexArray(vaoId);

	// Draws the vertices
	glDrawArrays(GL_TRIANGLES, 0, vertices);

	// Resets the state
	glUseProgram(0);
}

void Screen::Swap()
{
	// Displays from the buffer to the window.
	SDL_GL_SwapWindow(window);
}

void Screen::Uninit()
{
	// Destroys and quits the window
	SDL_DestroyWindow(window);
	SDL_Quit();
}