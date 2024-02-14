#ifndef _MAINMENU_HPP_
#define _MAINMENU_HPP_

#include "LoadingMenu.hpp"
#include "screen_stuff.h"
#include "game_state.h"
#include "SavingMenu.hpp"
#include "HeaderDisplayer.hpp"

class MainMenu {
public:
    MainMenu() = default;

    ~MainMenu() = default;

    void displayMainMenu();

private:
    LoadingMenu loading_menu;
    SavingMenu saving_menu;
    ScreenStuff screen_stuff;
    GameState game_state;
    HeaderDisplayer header_displayer;
};

#endif