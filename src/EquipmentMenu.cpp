#include "../include/EquipmentMenu.hpp"
#include "../include/Player.hpp"

#include <iostream>
#include <sstream>

void EquipmentMenu::printMenu() {
    std::uint32_t choice;
    do {
        screen_stuff.clear();
        header_displayer.displayHeader();
        player->printEquipment();
        std::cout << player->getEquipmentSize() + 1 << ". Return\n";   
        std::cout << "\nYour choice: ";

        std::string input;
        std::cin >> input;
        std::istringstream iss(input);

        if (iss >> choice && choice <= player->getEquipmentSize() + 1) {
            if (choice != player->getEquipmentSize() + 1) {
                printChoices();
                std::cout << "\nYour choice: ";
                std::cin >> input;
                std::istringstream iss(input);
                if (iss >> choice) {
                    action(choice);
                    choice = {};
                }
            }
        }
    } while (choice != player->getEquipmentSize() + 1);
}

void EquipmentMenu::action(std::uint32_t val) const {
    switch (val) {
        case 1: 
            std::cout << "Using" << std::endl;
            break;
        case 2:
            std::cout << "Dropping" << std::endl;
            break;
        default:
            break;
    }
}