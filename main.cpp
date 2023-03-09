#include <iostream>
#include <cstdlib>
#include "includes.h"

int main() {

//GameState game_state;
//ScreenStuff screen_stuff;

MainMenu main_menu;

int i {1};
do {
  GameState game_state;
  ScreenStuff screen_stuff;
  screen_stuff.clear();
  main_menu.display_menu();
  while(i == 1) {
      screen_stuff.clear();
      game_state.display_location();
  }
} while (i == 1);
    return 0;
}