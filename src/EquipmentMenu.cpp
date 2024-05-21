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
        std::string item_name;

        if (iss >> choice && choice <= player->getEquipmentSize() + 1) {
            if (choice != player->getEquipmentSize() + 1) {
                item_name = player->getItemFromEquipment(choice - 1).getName();
                printChoices();
                std::cout << "\nYour choice: ";
                std::cin >> input;
                std::istringstream iss(input);
                if (iss >> choice) {
                    action(item_name, choice);
                    choice = {};
                }
            }
        }
    } while (choice != player->getEquipmentSize() + 1);
}

void EquipmentMenu::action(const std::string& item, std::uint32_t val) const {
    switch (val) {
        case 1: 
            player->useItem(item);
            break;
        case 2:
            player->deleteItem(item);
            break;
        default:
            break;
    }
}