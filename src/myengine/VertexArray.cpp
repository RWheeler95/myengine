#include "VertexArray.h"
#include "Vec3.h"

VertexArray::VertexArray()
{
	// Create a new VAO on the GPU and bind it
	glGenVertexArrays(1, &vaoId);

	if (!vaoId)
	{
		throw std::exception();
	}

	glBindVertexArray(vaoId);
}

void VertexArray::setAttribPointer(int pos, int size)
{
	glVertexAttribPointer(pos, size, GL_FLOAT, GL_FALSE,
		size * sizeof(GLfloat), (void *)0);

	glEnableVertexAttribArray(pos);
}

void VertexArray::Reset()
{
	// Reset the state
	glBindVertexArray(0);
}
