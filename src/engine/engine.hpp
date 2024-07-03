#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Engine
{
private:
  // A regular RenderWindow
  RenderWindow m_Window;

  Color color;

  // Declare a sprite and a Texture for the background
  Sprite m_BackgroundSprite;
  Texture m_BackgroundTexture;

  // Private functions for internal use only
  void input();
  void update(float dtAsSeconds);
  void draw();

public:
  // The Engine constructor
  Engine();

  // start will call all the private functions
  void start();
};