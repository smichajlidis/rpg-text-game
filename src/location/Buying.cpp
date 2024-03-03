#include "../../include/location/Buying.hpp"

#include <iostream>

void Buying::printLocation() {
    std::uint16_t choice;
    printEquipment();
    std::cout << "\nWhat would you like to buy? ";
    std::cin >> choice;
}