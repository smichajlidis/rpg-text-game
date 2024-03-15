#include "../include/EquipmentMenu.hpp"
#include "../include/Player.hpp"

#include <iostream>

void EquipmentMenu::displayMenu() {
    char choice {};
    header_displayer.displayHeader();
    player->printEquipment();   
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice;
}