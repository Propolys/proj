#ifndef MDRAW_H
#define MDRAW_H
#include <SFML/Graphics.hpp>
namespace mGraphics
{
  class mDraw
  {
  public:
    bool initialize(sf::Texture * initTexture, float initx, float inity, float initxs, float initys, bool initleftanchor, bool inittopanchor);
    bool initialize(sf::Texture * initTexture, float initx, float inity, bool initleftanchor, bool initrightanchor);
    bool setTexture(sf::Texture * newTexture);
    void setSize(float xs, float ys);
    void draw(sf::RenderWindow * window);
    float x, y, textureW, textureH, xs, ys;
    bool leftAnchor, topAnchor;
  private:
    sf::Sprite * sprite;
  };
}

#endif
