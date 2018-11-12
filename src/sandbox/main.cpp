#include <myengine/Entity.h>
#include <myengine/Core.h>
#include <myengine/Component.h>
#include <myengine/Test.h>

#include <iostream>
#include <vector>
#include <memory>

int main()
{
	std::shared_ptr<Entity> ent = std::make_shared<Entity>();
	std::shared_ptr<Test> t = ent->addcomponent<Test>();

	t->addValue(10);

	//std::shared_ptr<Component> c1 = ent->getComponent();
	//std::shared_ptr<Component> c2 = ent->getComponent();
	//std::shared_ptr<Component> c3 = ent->getComponent();

	//c1->test = 10;
	//c2->test = 20;
	//c3->test = 30;

	std::cout << t->getTest() << std::endl;
	std::cout << c2->test << std::endl;
	std::cout << c3->test << std::endl;

	std::cin.get();

	//Core C;
	//C.Run();

   return 0;
}