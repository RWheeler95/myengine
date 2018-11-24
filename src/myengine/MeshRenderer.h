// File includes
#include "Component.h"
#include "Vec3.h"

// System includes
#include <GL/glew.h>
#include <vector>

// Forward declarations
class Screen;
class VertexArray;
class VertexBuffer;
class ShaderProgram;

/**
 * MeshRenderer class that controls the drawing to the screen
 */
class MeshRenderer : public Component
{
private:

	std::vector<vec3> positions; ///< Vector that stores positions.

	std::shared_ptr<VertexArray> va; ///< Shared pointer to vertex array.

	std::shared_ptr<VertexBuffer> vb; ///< Shared pointer to vertex buffer.

	std::shared_ptr<ShaderProgram> sp; ///< Shared pointer to shader program.

public:
	
	void SetMesh(std::vector<vec3> _positions); ///< Function that sets the positions of the mesh.

	void Draw(std::shared_ptr<Screen> window); ///< Function that draws to the screen.

};