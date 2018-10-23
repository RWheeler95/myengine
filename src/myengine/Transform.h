
#include "Component.h"

class Transform : public Component
{
	private:
		float x;
		float y; 
		float z;

	public:
		void onInit();
};