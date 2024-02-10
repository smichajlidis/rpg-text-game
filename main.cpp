#include "include/main_menu.h"
#include "include/game_state.h"
#include "include/screen_stuff.h"

#include <iostream>
#include <cstdlib>

int main() {

    MainMenu main_menu;
    int i {1};
    main_menu.get_i_ptr(&i);
    main_menu.displayMainMenu();

    
    // do {
    //     GameState game_state(&i);
    //     ScreenStuff screen_stuff;
    //     main_menu.displayMainMenu();
    //     while(i == 1) {
    //         screen_stuff.clear();
    //         game_state.display_location();
    //     }
    // } while (i != 0);
    //     return 0;
}