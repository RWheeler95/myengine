#include <vector>
#include <memory>

#include <GL/glew.h>

class VertexArray
{
private:

	GLuint vaoId = 0;
	std::vector<std::shared_ptr<VertexBuffer>> buffers;
	std::vector<std::shared_ptr<VertexArray>> bindBuffers;

public:

	void Vao();

	std::shared_ptr<VertexBuffer> addBuffer()
	{
		std::shared_ptr<VertexBuffer> buffer = std::make_shared<VertexBuffer>();

		buffers.push_back(buffer);

		return buffer;
	}
};