// File includes
#include "Component.h"

/**
 * Transform class that inherites from the component class
 */
class Transform : public Component
{
private:

	float x; ///< Float initialising x.
	float y; ///< Float initialising y.
	float z; ///< Float initialising z.

public:

	void onInit(); ///< Function that sets values for x, y and z.

	float GetX() { return x; } ///< ???

	void SetX(float _x) { x = _x; } ///< ???

};