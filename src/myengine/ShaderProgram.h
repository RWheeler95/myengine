// System includes
#include <memory>
#include <vector>
#include <exception>
#include <GL/glew.h>

/**
 * Shader program class 
 */
class ShaderProgram
{
private:

	GLint success = 0; ///< Initialises success to 0.

	GLuint vertexShaderId; ///< unsigned int for vertexShaderId.

	GLuint fragmentShaderId; ///< unsigned int for fragmentShaderId.

	GLuint programId; ///< unsigned int for programId.

public:

	ShaderProgram(); ///< ???
	
	GLuint GetProgramId() { return programId; } ///< ???
	
	void VertexShader(); ///< Function for the vertex shader.

	void FragmentShader(); ///< Function for the fragment shader.

	void LinkShaders(); ///< Function which links the shaders.

};