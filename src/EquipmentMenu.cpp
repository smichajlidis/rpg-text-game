#include "../include/EquipmentMenu.hpp"
#include "../include/Player.hpp"

#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

void EquipmentMenu::printMenu() {
    std::uint32_t choice;
    std::uint32_t count;
    do {
        screen_stuff.clear();
        header_displayer.displayHeader();
        player->printEquipment();

        count = player->getEquipmentSize() + 1;

        if (player->isThereSomethingInActiveItems()) {
            std::cout << "\n" << count << ". Take off an item\n";
            ++count;
        } else {
            std::cout << "\n";
        }
        std::cout << count << ". Return\n";   
        std::cout << "\nYour choice: ";

        std::string input;
        std::cin >> input;
        std::istringstream iss(input);
        std::string item_name;

        if (iss >> choice && choice <= player->getEquipmentSize()) {
            item_name = player->getItemFromEquipment(choice - 1).getName();
            printChoices();
            std::cout << "\nYour choice: ";
            std::cin >> input;
            std::istringstream iss(input);
            if (iss >> choice) {
                action(item_name, choice);
                choice = {};
            }
        } else if (choice == count - 1) {
            takeOffAnItemMenu();
        }
    } while (choice != count);
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

void EquipmentMenu::takeOffAnItemMenu() {

    std::unordered_map<std::string, Item> active_items = player->getActiveItems();
    std::uint32_t count = 1;
    std::uint32_t choice;
    std::string input;
    std::vector<std::string> items;
    items.push_back("");

    std::cout << "\n";
    if (!active_items.empty()) {
        std::for_each(active_items.begin(), active_items.end(), [&count, &items](const std::pair<const std::string&, Item>& pair) {
            if (pair.second.getName() != "") {
                std::cout << count << ". Take off the " << pair.second.getName() << std::endl;
                items.push_back(pair.first);
                ++count;
            }
        });
    }
    std::cout << count << ". Return\n" << std::endl;
    std::cout << "Your choice: ";
    std::cin >> input;

    std::istringstream iss(input);

    if (iss >> choice && choice < count) {
        player->takeOffItem(items.at(choice));
    }
}