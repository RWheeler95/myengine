#include <memory>

class Entity;
class Core;
class Keyboard;
class Environment;

class Component
{
private:

	std::weak_ptr<Entity> entity;
	
	void onInit();
	void onBegin();
	void onTick();
	void onDisplay();

public:

	void getEntity();
	void getCore();
	void getKeyboard();
	void getEnvironment();
};