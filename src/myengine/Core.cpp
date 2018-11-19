#include "Core.h"
#include "Entity.h"

#include <SDL2/SDL.h>
#include <GL/glew.h>

void Core::Init()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		throw std::exception();
	}
}

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