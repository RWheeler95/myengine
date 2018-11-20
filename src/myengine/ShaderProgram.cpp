#include "ShaderProgram.h"

#include <SDL2/SDL.h>
#include <GL/glew.h>

void ShaderProgram::VertexShader()
{
	const GLchar *vertexShaderSrc =
		"attribute vec3 in_Position;             " \
		"                                        " \
		"void main()                             " \
		"{                                       " \
		"  gl_Position = vec4(in_Position, 1.0); " \
		"}                                       ";

	// Create a new vertex shader, attach source code, compile it and check for errors
	GLuint vertexShaderId = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShaderId, 1, &vertexShaderSrc, NULL);
	glCompileShader(vertexShaderId);
	GLint success = 0;
	glGetShaderiv(vertexShaderId, GL_COMPILE_STATUS, &success);

	if (!success)
	{
		throw std::exception();
	}
}

void ShaderProgram::FragmentShader()
{
	const GLchar *fragmentShaderSrc =
		"void main()                        " \
		"{                                  " \
		"  gl_FragColor = vec4(0, 0, 1, 1); " \
		"}                                  ";

	// Create a new fragment shader, attach source code, compile it and check for errors
	GLuint fragmentShaderId = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShaderId, 1, &fragmentShaderSrc, NULL);
	glCompileShader(fragmentShaderId);
	GLint success = 0;
	glGetShaderiv(fragmentShaderId, GL_COMPILE_STATUS, &success);

	if (!success)
	{
		throw std::exception();
	}
}