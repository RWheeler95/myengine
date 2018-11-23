// File includes
#include "myengine/Component.h"

void Component::onInit()
{

}

void Component::onBegin()
{

}

void Component::onTick()
{

}

void Component::onDisplay()
{
	
}


std::shared_ptr<Entity> Component::getEntity()
{
	// Returns a shared pointer from a weak pointer
	return entity.lock();
}

void Component::setEntity(std::shared_ptr<Entity> _entity)
{
	// Sets an Entity
	entity = _entity;
}

void Component::getCore()
{
	// Shared pointer to Core
	std::shared_ptr<Core>;
}

void Component::getKeyboard()
{
	// Shared pointer to Keyboard
	std::shared_ptr<Keyboard>;
}

void Component::getEnvironment()
{
	// Shared pointer to Environment
	std::shared_ptr<Environment>;
}