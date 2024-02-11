#ifndef _MAINMENU_HPP_
#define _MAINMENU_HPP_

#include "load.h"
#include "screen_stuff.h"
#include "game_state.h"

class MainMenu {
public:
    MainMenu() = default;

    ~MainMenu() = default;

    void displayHeader() const;
    void displayMainMenu();

private:
    Load load;
    ScreenStuff screen_stuff;
    GameState game_state;
};

#endif