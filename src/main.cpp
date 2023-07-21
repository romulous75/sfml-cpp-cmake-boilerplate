#include "config.h"
#include <sstream>
#include "classes/Game.hpp"

int main(int argc, char* argv[])
{
  std::stringstream version;
  version << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR;

  std::string title = "My Game (" + version.str() + ")";

  Game game;
  game.initWindow(title, 60);

  while (game.isOpen())
  {
    game.update();
    game.render();
  }

  return EXIT_SUCCESS;
}
