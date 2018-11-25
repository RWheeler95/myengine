// System includes
#include <vector>
#include <memory>
#include <GL/glew.h>

// File includes
#include "Vec3.h"

/**
 * Vertex buffer class
 */
class VertexBuffer
{
private:

	GLuint positionsVboId = 0;

public:
	
	VertexBuffer(std::vector<vec3> data);

	void bindBuffer();

	void Reset();
};