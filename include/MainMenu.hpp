#ifndef _MAINMENU_HPP_
#define _MAINMENU_HPP_

#include "LoadingMenu.hpp"
#include "ScreenStuff.hpp"
#include "GameState.hpp"
#include "SavingMenu.hpp"
#include "ExitingMenu.hpp"
#include "Menu.hpp"

class MainMenu: public Menu {
public:
    MainMenu(const std::string& title = "", const std::string& choice_1 = "New Game", const std::string& choice_2 = "Load", const std::string& choice_3 = "Quit");

    ~MainMenu() = default;

    virtual void printMenu() override;
    virtual void action(std::uint32_t) const override;

private:
    std::shared_ptr<LoadingMenu> loading_menu;
    std::shared_ptr<SavingMenu> saving_menu;
    std::shared_ptr<ExitingMenu> exiting_menu;
    ScreenStuff screen_stuff;
    std::shared_ptr<GameState> game_state;
};

#endif