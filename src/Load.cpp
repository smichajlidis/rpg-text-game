#include "../include/LoadingMenu.hpp"

#include <iostream>

void LoadingMenu::displayLoadingMenu() {
    char choice {};
    std::cout<<"Here you will can load your saves\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}