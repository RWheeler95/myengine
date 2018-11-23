// System includes
#include <memory>
#include <vector>

// Forward declarations
class Entity;

/**
* Core class represents the scene
*/
class Core
{
private:

	std::vector<std::shared_ptr<Entity>> entities; ///< Vector that stores entities.

public:
	
	void Init(); ///< Function that initialises scene.

	void Update(); ///< Function for the game loop.

	void Run(); ///< Function which runs through all the entities.
	
};