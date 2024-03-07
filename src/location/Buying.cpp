#include "../../include/location/Buying.hpp"

#include <iostream>

void Buying::printLocation() {
    std::cout << descriptions.at(0) << "\n\n";
    printEquipment();
    std::cout << std::endl;
    std::cout << equipment.size() + 1 << ". " << descriptions.at(1) << std::endl;
    std::cout << equipment.size() + 2 << ". " << descriptions.at(2) << std::endl;
    std::cout << "\nWhat do you want?";
} 