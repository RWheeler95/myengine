#include <vector>
#include <memory>

class Component;
class Core;

class Entity
{
private:

	int test;

	std::vector<std::shared_ptr<Component>> components;
	std::weak_ptr<Core> core;

	
	void display();

public:
	
	void getCore();

	//template <typename T, typename A, typename B, typename C>
	void addcomponent();

	void tick();
};