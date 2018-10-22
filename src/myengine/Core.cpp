#include "Core.h"
#include "Entity.h"

void Core::Run()
{
	while (true)
	{
		for (size_t i = 0; i < entities.size(); i++)
		{
			entities.at(i)->tick();
		}
	}
}