#include "engine.hpp"

Engine::Engine()
{
  // Get the screen resolution and create an SFML window and View
  Vector2f resolution;
  resolution.x = VideoMode::getDesktopMode().width;
  resolution.y = VideoMode::getDesktopMode().height;

  m_Window.create(VideoMode(resolution.x, resolution.y),
                  "Simple Game Engine",
                  Style::Default);

  // Load the background into the texture
  // Be sure to scale this image to your screen size
  // m_BackgroundTexture.loadFromFile("../assets/background.jpg");

  // // Associate the sprite with the texture
  // m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::start()
{
  // Timing
  Clock clock;

  while (m_Window.isOpen())
  {
    sf::Event event;
    while (m_Window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        m_Window.close();
    }

    draw();
  }
}

void Engine::draw()
{
  // Rub out the last frame
  m_Window.clear(Color::White);

  // Draw the background
  m_Window.draw(m_BackgroundSprite);
  // m_Window.draw(m_Bob.getSprite());

  // Show everything we have just drawn
  m_Window.display();
}