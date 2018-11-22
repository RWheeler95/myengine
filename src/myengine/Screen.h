#include <memory>
#include <vector>

#include <GL/glew.h>
#include <SDL2/SDL.h>

/**
* Represents the Screen state
*/
class Screen
{
private:
	
	SDL_Window* window;

public:

	void Create(); ///< The initial creation of the window.

	void Display(GLuint programId, GLuint vaoId, int vertices); ///< The display to the screen.

	void Reset();

	void Swap();

	void Uninit();

};