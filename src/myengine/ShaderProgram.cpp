// File includes
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

	// Creates a new vertex shader, attaches source code and then compiles it
	vertexShaderId = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShaderId, 1, &vertexShaderSrc, NULL);
	glCompileShader(vertexShaderId);
	glGetShaderiv(vertexShaderId, GL_COMPILE_STATUS, &success);

	if (!success)
	{
		// Throws an exception if it does not succeed
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

	// Creates a new fragment shader, attaches source code and then compiles it
	fragmentShaderId = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShaderId, 1, &fragmentShaderSrc, NULL);
	glCompileShader(fragmentShaderId);
	glGetShaderiv(fragmentShaderId, GL_COMPILE_STATUS, &success);

	if (!success)
	{
		// Throws an exception if it does not succeed
		throw std::exception();
	}
}

void ShaderProgram::LinkShaders()
{
	// Creates a new shader program and attaches the shader objects
	programId = glCreateProgram();
	glAttachShader(programId, vertexShaderId);
	glAttachShader(programId, fragmentShaderId);

	// Ensure the VAO "position" attribute stream gets set as the first 
	// position during the link
	glBindAttribLocation(programId, 0, "in_Position");

	// Performs the link
	glLinkProgram(programId);
	glGetProgramiv(programId, GL_LINK_STATUS, &success);

	if (!success)
	{
		// Throws an exception if it does not succeed
		throw std::exception();
	}

	// Detaches and destroys the shader objects as these are no longer needed 
	// because there is now a complete shader program
	glDetachShader(programId, vertexShaderId);
	glDeleteShader(vertexShaderId);
	glDetachShader(programId, fragmentShaderId);
	glDeleteShader(fragmentShaderId);
}
