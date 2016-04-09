#ifndef RESOURCES_H
#define RESOURCES_H
#include <SFML/Graphics.hpp>

#define TEXTURE_GRASS "res/grass.png"
#define TEXTURE_UIPANEL "res/uipanel.png"

class Resources
{
public:
  sf::Texture * grassTexture = new sf::Texture();
  sf::Texture * UIPanelTexture = new sf::Texture();
  bool initialize();
};

#endif
