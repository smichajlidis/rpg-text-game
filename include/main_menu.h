#ifndef _MAINMENU_H_
#define _MAINMENU_H_

#include "load.h"
#include "screen_stuff.h"
#include "game_state.h"

class MainMenu {
public:
    MainMenu()
        : game_state(i_ptr) {};

    ~MainMenu() = default;

    void displayHeader() const;
    void displayMainMenu();
    void get_i_ptr(int* i);
    void change_i();

private:
    Load load;
    ScreenStuff screen_stuff;
    int* i_ptr;
    GameState game_state;

};

#endif