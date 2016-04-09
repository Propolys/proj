#include "Interface.h"

namespace Game
{
  void Interface::initialize(Resources * _resloader)
  {
    this->resloader = _resloader;
    this->dummypanel = new sf::Sprite(*this->resloader->UIPanelTexture);
    this->dummypanel->setScale(640, 64);
  }

  void Interface::draw(sf::RenderWindow * window)
  {
    window->draw(*this->dummypanel);
  }
}
