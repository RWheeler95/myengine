#include "Screen.h"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

void Screen::Create()
{
	window = SDL_CreateWindow("MYENGINE",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WIDTH, WINDOW_HEIGHT,
		SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

	if (!SDL_GL_CreateContext(window))
	{
		throw std::exception();
	}

	if (glewInit() != GLEW_OK)
	{
		throw std::exception();
	}
}

void Screen::Display(GLuint programId, GLuint vaoId, int vertices)
{
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	//Instruct OpenGL to use our shader program and our VAO
	glUseProgram(programId);
	glBindVertexArray(vaoId);

	// Draw 3 vertices (a triangle)
	glDrawArrays(GL_TRIANGLES, 0, vertices);

	glUseProgram(0);
}

void Screen::Reset()
{
	
}

void Screen::Swap()
{
	SDL_GL_SwapWindow(window);
}

void Screen::Uninit()
{
	SDL_DestroyWindow(window);
	SDL_Quit();
}