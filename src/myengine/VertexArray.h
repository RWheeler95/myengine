// System includes
#include <vector>
#include <memory>
#include <GL/glew.h>

// File includes
#include "Vec3.h"
#include "VertexBuffer.h"

/**
 * Vertex array class
 */
class VertexArray
{
private:

	GLuint vaoId = 0;

	std::vector<std::shared_ptr<VertexBuffer>> buffers;

public:
	
	VertexArray();

	GLuint GetVaoId() { return vaoId; }

	std::shared_ptr<VertexBuffer> addBuffer(std::vector<vec3> data)
	{
		std::shared_ptr<VertexBuffer> buffer = std::make_shared<VertexBuffer>(data);

		buffers.push_back(buffer);

		return buffer;
	}

	void setAttribPointer(int pos, int size);

	void Reset();

};