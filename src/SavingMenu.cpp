#include "../include/SavingMenu.hpp"

#include <iostream>

void SavingMenu::displaySavingMenu() {
    char choice {};
    std::cout<<"Here you will can save your saves\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}