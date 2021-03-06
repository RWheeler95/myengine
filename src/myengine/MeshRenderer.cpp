// File includes
#include "MeshRenderer.h"
#include "VertexArray.h"
#include "ShaderProgram.h"
#include "Screen.h"

void MeshRenderer::SetMesh(std::vector<vec3> _positions)
{
	// Sets positions of the mesh
	positions = _positions;
}

void MeshRenderer::Draw(std::shared_ptr<Screen> window)
{
	// Sets va to the vertex array
	va = std::make_shared<VertexArray>();

	// ???
	vb = va->addBuffer(positions);

	// Bind the position VBO, assign it to position 0 on the bound VAO 
	// and flag it to be used
	vb->bindBuffer();

	// ???
	va->setAttribPointer(0, 3);

	// Resets the state
	va->Reset();

	// Sets sp to the shader program
	sp = std::make_shared<ShaderProgram>();

	// Displays to the window
	window->Display(sp->GetProgramId(), va->GetVaoId(), positions.size());

	// Resets the state
	va->Reset();
}
