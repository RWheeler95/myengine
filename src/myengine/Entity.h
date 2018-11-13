#include "Component.h"

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

	template <typename T> std::shared_ptr<T> addComponent()
	{
		// Creating a component of type 'T'
		std::shared_ptr<T> component = std::make_shared<T>();

		components.push_back(component);

		return component;
	}
	
	template <typename T> std::shared_ptr<T> getComponent()
	{
		for (unsigned int i = 0; i < components.size(); i++)
		{
			std::shared_ptr<T> component = std::static_pointer_cast<T>(components.at(i));

			if (component != nullptr)
			{
				return component;
			}
		}

		return nullptr;
	}
};