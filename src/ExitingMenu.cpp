#include "../include/ExitingMenu.hpp"

#include <iostream>

void ExitingMenu::printMenu() {
    char choice {};
    header_displayer.displayHeader();
    std::cout<<"If you don't have your game saved yet here will be a question about if you want to save your progress.\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}

void ExitingMenu::action(std::uint32_t) const {
    
}