#include "mDraw.h"

namespace mGraphics
{
  bool mDraw::initialize(sf::Texture * initTexture, float initx, float inity, float initxs, float initys, bool initleftanchor, bool inittopanchor)
  {
    this->sprite = new sf::Sprite(*initTexture);
    {
      sf::Vector2u texturesize = initTexture->getSize();
      this->textureW = texturesize.x;
      this->textureH = texturesize.y;
    }
    sprite->setPosition(initx, inity);
    sprite->setScale(initxs/textureW, initys/textureH);
    this->x=initx;
    this->y=inity;
    this->leftAnchor = initleftanchor;
    this->topAnchor = inittopanchor;
  }

}
