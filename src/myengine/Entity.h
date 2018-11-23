// File include
#include "Component.h"

// System includes
#include <vector>
#include <memory>

// Forward declarations
class Component;
class Core;

/**
 * Entity class that adds and gets components
 */
class Entity
{
private:

	std::vector<std::shared_ptr<Component>> components; ///< Vector that stores components.

	std::weak_ptr<Core> core; ///< Weak pointer to core.

	void display(); ///< Display function.

public:
	
	void getCore(); ///< Function to get Core.

	void tick(); ///< Function which runs through all the components.

	/**
	 * Template function to add components.
	 */
	template <typename T> std::shared_ptr<T> addComponent()
	{
		std::shared_ptr<T> component = std::make_shared<T>();

		components.push_back(component);

		return component;
	}
	
	/**
     * Template function to get components.
     */
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