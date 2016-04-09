#include "Resources.h"


bool Resources::initialize()
{
  this->grassTexture->loadFromFile(TEXTURE_GRASS);
  this->UIPanelTexture->loadFromFile(TEXTURE_UIPANEL);
}
