#include <memory>

#ifndef _COMPONENT_H_
#define _COMPONENT_H_

class Entity;
class Core;
class Keyboard;
class Environment;

class Component
{
private:

	std::weak_ptr<Entity> entity;

public:

	//virtual void onInit() = 0;

	void onInit();
	void onBegin();
	void onTick();
	void onDisplay();

	std::shared_ptr<Entity> getEntity();
	void setEntity(std::shared_ptr<Entity> _entity);
	void getCore();
	void getKeyboard();
	void getEnvironment();

};
#endif