#include <memory>
#include <vector>
#include <exception>
#include <GL/glew.h>

class ShaderProgram
{
private:

	GLint success = 0;
	GLuint vertexShaderId;
	GLuint fragmentShaderId;
	GLuint programId;

public:

	void VertexShader();
	void FragmentShader();
	void LinkShaders();

};