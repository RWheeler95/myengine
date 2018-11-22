#include "VertexBuffer.h"

VertexBuffer::VertexBuffer(std::vector<vec3> data)
{
	// Create a new VBO on the GPU and bind it
	glGenBuffers(1, &positionsVboId);

	if (!positionsVboId)
	{
		throw std::exception();
	}

	glBindBuffer(GL_ARRAY_BUFFER, positionsVboId);

	// Upload a copy of the data from memory into the new VBO
	glBufferData(GL_ARRAY_BUFFER, sizeof(data) * data.size(), &data.at(0), GL_STATIC_DRAW);

	// Reset the state
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void VertexBuffer::bindBuffer()
{
	glBindBuffer(GL_ARRAY_BUFFER, positionsVboId);
}

void VertexBuffer::Reset()
{
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}
