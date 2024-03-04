#include "../../include/location/Buying.hpp"

#include <iostream>

void Buying::printLocation() {
    std::cout << descriptions.at(0) << "\n\n";
    printEquipment();
    std::cout << "\n0. " << descriptions.at(1) << "\n\n";
    std::cout << "What do you want?";
} 