#include "Engine.h"
namespace Game
{
	Engine::Engine()
	{
		mainWindow = new sf::RenderWindow(sf::VideoMode(WINDOW_INITIAL_SIZE_WIDTH, WINDOW_INITIAL_SIZE_HEIGHT), WINDOW_TITLE);
		loopThread = new std::thread(&Engine::loop, this);
		loopThread->join();
	}

	Engine::~Engine()
	{

	}

	void Engine::loop()
	{
		while(mainWindow->isOpen())
		{
			sf::Event eventPull;
			while(mainWindow->pollEvent(eventPull))
			{
				switch(eventPull.type)
				{
					case sf::Event::Closed:
						mainWindow->close();
					break;
				}
			}
			mainWindow->clear();
			mainWindow->display();
		}
	}

	void Engine::consoleLog(std::string message)
	{
		std::cout<<message<<'\n';
	}
}
