#include <vector>
#include <memory>

#include <GL/glew.h>

#include "Vec3.h"

class VertexBuffer
{
private:

	GLuint positionsVboId = 0;

public:
	
	VertexBuffer(std::vector<vec3> data);

	void bindBuffer();

	void Reset();
};