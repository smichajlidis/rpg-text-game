#include <iostream>
#include "includes.h"

int main() {

    

    GameState game_state;

    int i {1};

    do {
      game_state.display_location();
    } while (i == 1);

   // square.print_location();
   // forest.print_location();
   // closed_chapel.print_location();
   // tavern.print_location();

    std::cout << "Hello World!" << std::endl;

    return 0;
}