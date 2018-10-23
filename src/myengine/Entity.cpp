#include "Entity.h"
#include "Component.h"

void Entity::tick()
{
	for (size_t i = 0; i < components.size(); i++)
	{
		components.at(i)->onTick();
	}
}

void Entity::display()
{

}



void Entity::getCore()
{
	std::shared_ptr<Core>;
}

void Entity::addcomponent()
{

}