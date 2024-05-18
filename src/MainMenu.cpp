#include "../include/MainMenu.hpp"

#include <iostream>
#include <limits>

MainMenu::MainMenu(const std::string& title, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : Menu(title, choice_1, choice_2, choice_3) {
        
    loading_menu = std::make_shared<LoadingMenu>();
    exiting_menu = std::make_shared<ExitingMenu>();

}

void MainMenu::printMenu() {
    std::uint32_t choice {};

    do {
        game_state = std::make_shared<GameState>();
        game_state->passItsPointerToSquare();
        screen_stuff.clear();
        header_displayer.displayHeader();

        printChoices();

        std::cin >> choice;
        screen_stuff.clear();

        action(choice);

    } while(choice!=3);
}

void MainMenu::action(std::uint32_t val) const {
    switch(val) {
        case 1:
            game_state->displayLocation();
            break;
        case 2:
            loading_menu->printMenu();
            break;
        default:
            break;
    }
}