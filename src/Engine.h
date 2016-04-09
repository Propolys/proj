#ifndef ENGINE_H
#define ENGINE_H
#include "Globals.h"
#include "Resources.h"
#include "Interface.h"
#include <thread>
#include <SFML/Graphics.hpp>

namespace Game
{
	class Engine
	{
	private:
		sf::RenderWindow* mainWindow;
		void loop();

		Resources * resloader = new Resources();
		Interface * interface = new Interface();
	public:
		Engine();
	};
}
#endif
