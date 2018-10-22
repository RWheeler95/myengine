#include <myengine/Entity.h>
#include <myengine/Core.h>

#include <iostream>
#include <vector>

int main()
{
	Entity *ent = new Entity();
	ent->addcomponent();

	Core C;
	C.Run();

   return 0;
}