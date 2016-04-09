#ifndef INTERFACE_H
#define INTERFACE_H
#include <SFML/Graphics.hpp>
#include "Resources.h"

namespace Game
{
  class Interface
  {
  public:
    void initialize(Resources * _resloader);
    void draw(sf::RenderWindow * window);

  private:
    Resources * resloader;
    sf::Sprite * dummypanel;
  };
}


#endif
