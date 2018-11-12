#include <memory>

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

	void getEntity();
	void getCore();
	void getKeyboard();
	void getEnvironment();

	//void onTick();

};