// System includes
#include <memory>
#include <vector>
#include <GL/glew.h>
#include <SDL2/SDL.h>

/**
 * Screen class that creates and manages the screen
 */
class Screen
{
private:
	
	SDL_Window* window; ///< Reference to the window.

public:

	void Create(); ///< Function that creates the window.

	void Display(GLuint programId, GLuint vaoId, int vertices); ///< Function that draws to the buffer.

	void Swap(); ///< Function that displays from the buffer to the screen.

	void Uninit(); ///< Function that destroys and quits the window.

};