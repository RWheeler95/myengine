#include "Component.h"
#include "Vec3.h"

#include <GL/glew.h>

#include <vector>

class Screen;
class VertexArray;
class VertexBuffer;
class ShaderProgram;

/**
* Represents 
*/
class MeshRenderer : public Component
{
private:
	std::vector<vec3> positions;

	std::shared_ptr<VertexArray> va;

	std::shared_ptr<VertexBuffer> vb;

	std::shared_ptr<ShaderProgram> sp;
public:
	
	void SetMesh(std::vector<vec3> _positions);

	void Draw(std::shared_ptr<Screen> window);

};