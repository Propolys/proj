#ifndef ENGINE_H
#define ENGINE_H
#include "Globals.h"
#include <iostream>
#include <string>
#include <thread>
#include <SFML/Graphics.hpp>

namespace Game
{
	class Engine
	{
	private:
		sf::RenderWindow* mainWindow;
		std::thread* loopThread;
		void loop();
	public:
		void consoleLog(std::string message);
		Engine();
		~Engine();
	};
}
#endif
