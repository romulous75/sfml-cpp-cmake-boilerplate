add_executable(mygame
  main.cpp classes/Game.cpp
)

# Yep, that's it!
target_link_libraries(mygame
  PUBLIC
    ImGui-SFML::ImGui-SFML
)

include(Install.cmake)
