#include <iostream>
#include "../includes/main_menu.h"

void MainMenu::display_menu() {
    char choice {};
    do {
    std::cout<<"_________________________\n";
    std::cout<<"|..::SUPER LEGS 2000::..|\n";
    std::cout<<" '^'''^'''^'''^'''^'''^'\n\n";
    std::cout<<"      1. New Game\n";
    std::cout<<"        2. Load\n";
    std::cout<<"      0. Quit Game\n\n";
    std::cout<<"What do you want to do? ";
    std::cin>>choice;
    switch(choice) {
        case '1': break;
        case '2': load.display_load(); break;
        default: break;
    }
    } while (choice == '2');
}

MainMenu::MainMenu() {
}

MainMenu::~MainMenu() {
}