#include "../../include/location/Selling.hpp"

#include <iostream>
#include <algorithm>

void Selling::printLocation() {
    std::cout << descriptions.at(0) << "\n\n";
    printEquipment();
    std::cout << std::endl;
    std::cout << player->getEquipmentSize() + 1 << ". " << descriptions.at(1) << std::endl;
    std::cout << player->getEquipmentSize() + 2 << ". " << descriptions.at(2) << std::endl;
    std::cout << "\nWhat do you want?";
}

bool Selling::inputValidation(std::uint32_t) const {
    return ((player->getEquipmentSize() + 2) ? true : false);
}

std::shared_ptr<Location> Selling::moveToLocation(std::uint32_t location_number) const {
    return locations.at(location_number - player->getEquipmentSize());
}

void Selling::printEquipment() const {
    player->printEquipment();
}