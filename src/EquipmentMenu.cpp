#include "../include/EquipmentMenu.hpp"
#include "../include/Player.hpp"

#include <iostream>

void EquipmentMenu::printMenu() {
    char choice {};
    header_displayer.displayHeader();
    player->printEquipment();   
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice;
}

void EquipmentMenu::action(std::uint32_t) const {
    
}