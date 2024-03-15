#ifndef _MAINMENU_HPP_
#define _MAINMENU_HPP_

#include "LoadingMenu.hpp"
#include "ScreenStuff.hpp"
#include "GameState.hpp"
#include "SavingMenu.hpp"
#include "Menu.hpp"

class MainMenu: public Menu {
public:
    MainMenu() = default;

    ~MainMenu() = default;

    void displayMenu() override;

private:
    LoadingMenu loading_menu;
    SavingMenu saving_menu;
    ScreenStuff screen_stuff;
    GameState game_state;
};

#endif