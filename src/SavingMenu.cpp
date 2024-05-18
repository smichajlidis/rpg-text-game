#include "../include/SavingMenu.hpp"

#include <iostream>

void SavingMenu::printMenu() {
    char choice {};
    header_displayer.displayHeader();
    std::cout<<"Here you will can save your saves\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}

void SavingMenu::action(std::uint32_t) const {
    
}