#include <iostream>
#include <cstdlib>
#include "includes.h"

int main() {

GameState game_state;
ScreenStuff screen_stuff;

int i {1};

do {
  screen_stuff.clear();
  game_state.display_location();
  } while (i == 1);

  return 0;
}