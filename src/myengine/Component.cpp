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
	return entity.lock();
}

void Component::setEntity(std::shared_ptr<Entity> _entity)
{
	entity = _entity;
}

void Component::getCore()
{
	std::shared_ptr<Core>;
}

void Component::getKeyboard()
{
	std::shared_ptr<Keyboard>;
}

void Component::getEnvironment()
{
	std::shared_ptr<Environment>;
}