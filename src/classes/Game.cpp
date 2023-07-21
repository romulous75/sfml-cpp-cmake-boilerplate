#include "Game.hpp"

Game::Game()
{}

Game::~Game()
{
  delete m_window;
}

bool Game::isOpen()
{
  return m_window->isOpen();
}

void Game::poleEvents()
{
  while (m_window->pollEvent(m_event)) {
    switch (m_event.type)
    {
      case sf::Event::Closed:
        m_window->close();
        break;

      case sf::Event::KeyPressed:
        switch (m_event.key.code) {
          case sf::Keyboard::Escape:
            m_window->close();
            break;
        }

      default:
        break;
    }
  }
}

void Game::update()
{
  poleEvents();
}

void Game::render()
{
  m_window->clear();


  m_window->display();
}

void Game::initWindow(std::string title, short framerateLimit)
{
  m_videoMode.width = 800;
  m_videoMode.height = 600;

  m_window = new sf::RenderWindow(m_videoMode, title);
  m_window->setFramerateLimit(framerateLimit);
}
