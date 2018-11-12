#include <vector>
#include <memory>

class Component;
class Core;

class Entity
{
private:

	//std::vector<std::shared_ptr<Component>> components;
	std::vector<std::shared_ptr<Component>> components;
	std::weak_ptr<Core> core;

	//void tick();
	void display();

public:
	
	void getCore();

	void tick();

	//template <typename T, typename A, typename B, typename C>
	void addcomponent();
	
	std::shared_ptr<Component> getComponent();
};