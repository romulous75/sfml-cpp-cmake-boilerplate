#pragma once

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics.hpp>
#include <string>

class Game
{
  private:
    sf::RenderWindow* m_window;
    sf::VideoMode m_videoMode;
    sf::Event m_event;

  public:
    Game();
    ~Game();

    void initWindow(std::string title, short framerateLimit);
    void update();
    void render();
    bool isOpen();

  protected:
    void poleEvents();
};