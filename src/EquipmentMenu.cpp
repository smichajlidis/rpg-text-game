#include "../include/EquipmentMenu.hpp"

#include <iostream>

void EquipmentMenu::displayEquipmentMenu() {
    char choice {};
    header_displayer.displayHeader();
    std::cout<<"Here you will be a list for your items\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}