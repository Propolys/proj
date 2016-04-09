#include "Engine.h"
#include <iostream>
namespace Game
{
	Engine::Engine()
	{
		mainWindow = new sf::RenderWindow(sf::VideoMode(WINDOW_INITIAL_SIZE_WIDTH, WINDOW_INITIAL_SIZE_HEIGHT), WINDOW_TITLE);
		//mainWindow->setMouseCursorVisible(false); TEMPORARY, UNTILL CURSOR ART IS DONE
		resloader->initialize();
		interface->initialize(resloader);
		loop();


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
			interface->draw(mainWindow);
			mainWindow->display();
		}
	}
}
