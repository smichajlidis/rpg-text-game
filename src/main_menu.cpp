#include <iostream>
#include "../includes/main_menu.h"

void MainMenu::display_menu() {
    char choice {};
    std::cout<<"_________________________\n";
    std::cout<<"|..::SUPER LEGS 2000::..|\n";
    std::cout<<" '^'''^'''^'''^'''^'''^'\n\n";
    std::cout<<"      1. New Game\n";
    std::cout<<"        2. Load\n";
    std::cout<<"      0. Quit Game\n\n";
    std::cout<<"What do you want to do? ";
    std::cin>>choice;
}

MainMenu::MainMenu() {
}

MainMenu::~MainMenu() {
}