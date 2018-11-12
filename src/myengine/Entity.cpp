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

void Entity::addcomponent<T>()
{
	// Create a bland component
	//Component *comp = new Component();
	std::shared_ptr<Component> comp = std::make_shared<Component>();

	// Add the component to the component vector
	components.push_back(comp);
}

std::shared_ptr<Component> Entity::getComponent()
{
	for (size_t i = 0; i < components.size(); i++)
	{
		return components.at(i);
	}

	//return components.at(0);
}