#include <SFML\Graphics.hpp>
#include <Windows.h>

using namespace std;
using namespace sf;



class Game
{
public:
	Game();
	~Game();
	void runGame();

protected:
	enum gameState {MENU, GAME, END};
	gameState state;

};