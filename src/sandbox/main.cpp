#include <myengine/Entity.h>
#include <myengine/Core.h>
#include <myengine/Component.h>

#include <iostream>
#include <vector>

int main()
{
	Entity *ent = new Entity();
	ent->addcomponent();
	ent->addcomponent();
	ent->addcomponent();

	Component* c1 = ent->getComponent();
	Component* c2 = ent->getComponent();
	Component* c3 = ent->getComponent();

	c1->test = 10;
	c2->test = 20;
	c3->test = 30;

	std::cout << c1->test << std::endl;
	std::cout << c2->test << std::endl;
	std::cout << c3->test << std::endl;

	std::cin.get();

	//Core C;
	//C.Run();

   return 0;
}