#include "Entity.h"
#include "Component.h"

void Entity::tick()
{
	for (size_t i = 0; i < components.size(); i++)
	{
		components.at(i)->onTick();
	}

	//Transform* t = GetComponent<Transform>();
	//MeshRenderer* m = GetComponent<MeshRenderer>();

	//t->UpdatePosition(0, 1.0f * deltaTime, 0.0f);

	//m->Draw();
}

void Entity::display()
{

}

void Entity::getCore()
{
	std::shared_ptr<Core>;
}

