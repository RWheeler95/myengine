#include <myengine/Entity.h>
#include <myengine/Core.h>
#include <myengine/Component.h>
#include <myengine/Test.h>
#include <myengine/Transform.h>

#include <iostream>
#include <vector>
#include <memory>

int main()
{
	std::shared_ptr<Core> scene = std::make_shared<Core>();

	std::shared_ptr<Entity> ent = std::make_shared<Entity>();

	std::shared_ptr<Transform> transform = ent->addComponent<Transform>();

	transform->setEntity(ent);

	transform->SetX(10);

	while (true)
	{
		std::shared_ptr<Transform> transform2 = ent->getComponent<Transform>();
		
		std::shared_ptr<Entity> ent2 = transform2->getEntity();

		std::shared_ptr<Transform> transform3 = ent2->getComponent<Transform>();

		

		transform->SetX(transform->GetX() + 1.0f);

		std::cout << transform->GetX() << std::endl;
	}


	//std::shared_ptr<Component> c1 = ent->getComponent();
	//std::shared_ptr<Component> c2 = ent->getComponent();
	//std::shared_ptr<Component> c3 = ent->getComponent();

	//c1->test = 10;
	//c2->test = 20;
	//c3->test = 30;

	/*std::cout << t->getTest() << std::endl;
	std::cout << c2->test << std::endl;
	std::cout << c3->test << std::endl;*/

	std::cin.get();

    return 0;
}