// File includes
#include "Core.h"
#include "Entity.h"

// System Includes
#include <SDL2/SDL.h>
#include <GL/glew.h>

void Core::Init()
{
	// Intitalises the scene and throws an exception when an error occurs
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		throw std::exception();
	}
}

void Core::Update()
{
	bool quit = false; // Sets quit to false

	// Runs the game loop
	while (!quit)
	{
		SDL_Event event = { 0 };

		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}
}

void Core::Run()
{
	// Runs through all the entities in the engine
	while (true)
	{
		for (size_t i = 0; i < entities.size(); i++)
		{
			entities.at(i)->tick();
		}
	}
}