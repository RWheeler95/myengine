// System includes
#include <memory>

// Header guards
#ifndef _COMPONENT_H_
#define _COMPONENT_H_

// Forward declarations
class Entity;
class Core;
class Keyboard;
class Environment;

/**
 * Component class
 */
class Component
{
private:

	std::weak_ptr<Entity> entity; ///< Weak pointer to entity.

public:

	void onInit(); ///< Initialise function.

	void onBegin(); ///< Begin function.

	void onTick(); ///< Tick function.

	void onDisplay(); ///< Display function.


	std::shared_ptr<Entity> getEntity(); ///< Shared pointer which gets an entity.

	void setEntity(std::shared_ptr<Entity> _entity); ///< Function that sets the entity.

	void getCore(); ///< Get core function.

	void getKeyboard(); ///< Get keyboard function.

	void getEnvironment(); ///< Get environment function.

};
#endif