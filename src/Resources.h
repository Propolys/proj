#ifndef RESOURCES_H
#define RESOURCES_H
#include <SFML/Graphics.hpp>

#define TEXTURE_GRASS "grass.png"

class Resources
{
public:
  sf::Texture * grassTexture = new sf::Texture();
  bool initialize();
};

#endif
