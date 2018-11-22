#include <memory>
#include <vector>

#include <GL/glew.h>
#include <SDL2/SDL.h>

class Screen
{
private:
	
	SDL_Window *window;

public:

	void Create();

	void Display(GLuint programId, GLuint vaoId, int vertices);

	void Reset();

	void Swap();

	void Uninit();

};