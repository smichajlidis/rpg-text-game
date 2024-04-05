#include "../include/MainMenu.hpp"

#include <iostream>
#include <limits>

void MainMenu::displayMenu() {
    std::uint32_t choice {};

    do {
        game_state = std::make_shared<GameState>();
        game_state->passItsPointerToSquare();

        screen_stuff.clear();
        header_displayer.displayHeader();

        std::cout<<"\t\t      1. New Game\n";
        std::cout<<"\t\t        2. Load\n";
        std::cout<<"\t\t      0. Quit Game\n\n";
        std::cout<<"\t\tWhat do you want to do? ";

        std::cin >> choice;
        screen_stuff.clear();

        switch(choice) {
            case 1:
                game_state->displayLocation();
                break;
            case 2:
                loading_menu.displayMenu();
                break;
            default:
                break;
        }

    } while(choice);
}