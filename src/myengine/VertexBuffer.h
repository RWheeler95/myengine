#include <vector>

#include <GL/glew.h>

class VertexBuffer
{
private:

	GLuint positionsVboId = 0;
	//GLuint vaoId = 0;

	//std::vector<std::shared_ptr<VertexArray>> bindBuffers;

public:

	void Vbo(std::vector<vec3> data);
	//void Vao();

	std::shared_ptr<VertexArray> bindBuffer()
	{
		glBindBuffer(GL_ARRAY_BUFFER, positionsVboId);
	}
	
};