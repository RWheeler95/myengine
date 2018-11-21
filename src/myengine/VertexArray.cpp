#include "VertexArray.h"
#include "VertexBuffer.h"
#include "Vec3.h"

void VertexArray::Vao()
{
	// Create a new VAO on the GPU and bind it
	glGenVertexArrays(1, &vaoId);

	if (!vaoId)
	{
		throw std::exception();
	}

	glBindVertexArray(vaoId);

	// Bind the position VBO, assign it to position 0 on the bound VAO 
	// and flag it to be used
	glBindBuffer(GL_ARRAY_BUFFER, positionsVboId);
	buffer->bindBuffer();

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE,
		3 * sizeof(GLfloat), (void *)0);

	glEnableVertexAttribArray(0);

	// Reset the state
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
}