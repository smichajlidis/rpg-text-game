#include "../include/ExitingMenu.hpp"

#include <iostream>

void ExitingMenu::displayMenu() {
    char choice {};
    header_displayer.displayHeader();
    std::cout<<"If you don't have your game saved yet here will be a question about if you want to save your progress.\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}