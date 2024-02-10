#include "../include/main_menu.h"

#include <iostream>
#include <limits>

void MainMenu::displayHeader() const {
    std::cout << std::endl;
    std::cout << "\t..........................................\n";
    std::cout << "\t------------ SUPER LEGS 2000 -------------\n";
    std::cout << "\t``````````````````````````````````````````" << std::endl;
}

void MainMenu::displayMainMenu() {
    size_t choice = 0;

    do {
        screen_stuff.clear();
        displayHeader();

        std::cout<<"\t\t      1. New Game\n";
        std::cout<<"\t\t        2. Load\n";
        std::cout<<"\t\t      0. Quit Game\n\n";
        std::cout<<"\t\tWhat do you want to do? ";

        std::cin >> choice;

        switch(choice) {
            case 1:
                screen_stuff.clear();
                game_state.display_location();
                break;
            case 2:
                screen_stuff.clear();
                load.display_load();
                break;
            case 0:
                //change_i();
                break;
            default:
                break;
        }

    } while(choice);
}

void MainMenu::change_i() {
    *i_ptr = 0;
}

void MainMenu::get_i_ptr(int* i) {
    i_ptr = i;
}