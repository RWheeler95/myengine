#include "ShaderProgram.h"

ShaderProgram::ShaderProgram()
{
	VertexShader();
	FragmentShader();
	LinkShaders();
}

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
	vertexShaderId = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShaderId, 1, &vertexShaderSrc, NULL);
	glCompileShader(vertexShaderId);
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
	fragmentShaderId = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShaderId, 1, &fragmentShaderSrc, NULL);
	glCompileShader(fragmentShaderId);
	glGetShaderiv(fragmentShaderId, GL_COMPILE_STATUS, &success);

	if (!success)
	{
		throw std::exception();
	}
}

void ShaderProgram::LinkShaders()
{
	// Create new shader program and attach our shader objects
	programId = glCreateProgram();
	glAttachShader(programId, vertexShaderId);
	glAttachShader(programId, fragmentShaderId);

	// Ensure the VAO "position" attribute stream gets set as the first 
	// position during the link
	glBindAttribLocation(programId, 0, "in_Position");

	// Perform the link and check for failure
	glLinkProgram(programId);
	glGetProgramiv(programId, GL_LINK_STATUS, &success);

	if (!success)
	{
		throw std::exception();
	}

	// Detach and destroy the shader objects. These are no longer needed 
	// because we now have a complete shader program
	glDetachShader(programId, vertexShaderId);
	glDeleteShader(vertexShaderId);
	glDetachShader(programId, fragmentShaderId);
	glDeleteShader(fragmentShaderId);
}
