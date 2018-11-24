// File includes
#include <myengine/Entity.h>
#include <myengine/Core.h>
#include <myengine/Component.h>
#include <myengine/Test.h>
#include <myengine/Transform.h>
#include <myengine/MeshRenderer.h>
#include <myengine/Screen.h>
#include <myengine/VertexArray.h>
#include <myengine/ShaderProgram.h>

// System includes
#include <iostream>
#include <vector>
#include <memory>

int main()
{
	std::shared_ptr<Core> scene = std::make_shared<Core>();

	scene->Init();

	std::shared_ptr<Screen> window = std::make_shared<Screen>();

	window->Create();

	std::shared_ptr<Entity> ent = std::make_shared<Entity>();

	std::shared_ptr<Transform> transform = ent->addComponent<Transform>();
	std::shared_ptr<MeshRenderer> meshRenderer = ent->addComponent<MeshRenderer>();

	std::vector<vec3> positions;

		positions.push_back({ -0.5f, 0.5f, 0.0f });
		positions.push_back({ -0.5f, -0.5f, 0.0f });
		positions.push_back({ 0.5f, -0.5f, 0.0f });
		positions.push_back({ -0.5f, 0.5f, 0.0f });
		positions.push_back({ 0.5f, -0.5f, 0.0f });
		positions.push_back({ 0.5f, 0.5f, 0.0f });

	meshRenderer->SetMesh(positions);

	meshRenderer->Draw(window);

	//transform->setEntity(ent);

	//transform->SetX(10);

	//while (true)
	//{
	//	std::shared_ptr<Transform> transform2 = ent->getComponent<Transform>();
	//	
	//	std::shared_ptr<Entity> ent2 = transform2->getEntity();

	//	std::shared_ptr<Transform> transform3 = ent2->getComponent<Transform>();

	//	

	//	transform->SetX(transform->GetX() + 1.0f);

	//	std::cout << transform->GetX() << std::endl;
	//}



	//std::vector<vec3> positions;

	//positions.push_back({ -0.5f, 0.5f, 0.0f });
	//positions.push_back({ -0.5f, -0.5f, 0.0f });
	//positions.push_back({ 0.5f, -0.5f, 0.0f });
	//positions.push_back({ -0.5f, 0.5f, 0.0f });
	//positions.push_back({ 0.5f, -0.5f, 0.0f });
	//positions.push_back({ 0.5f, 0.5f, 0.0f });


	//std::shared_ptr<VertexArray> va = std::make_shared<VertexArray>();

	//std::shared_ptr<VertexBuffer> vb = va->addBuffer(positions);

	//// Bind the position VBO, assign it to position 0 on the bound VAO 
	//// and flag it to be used
	//vb->bindBuffer();

	//va->setAttribPointer(0, 3);

	//va->Reset();

	//std::shared_ptr<ShaderProgram> sp = std::make_shared<ShaderProgram>();

	//window->Display(sp->GetProgramId(), va->GetVaoId(), positions.size());
	
	window->Swap();


	scene->Update();


	std::cin.get();

    return 0;
}