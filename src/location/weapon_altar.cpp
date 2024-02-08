#include <iostream>
#include "../../include/location/weapon_altar.h"

Location* WeaponAltar::making_a_choice() {
    char choice;
        std::cout<<"Keep praying...\n\n";
    std::cout<<"Press any key to continue";
    std::cin>>choice;
    return related_locations.at(0);
}

WeaponAltar::WeaponAltar(std::string name_val)
    : Location(name_val) {
}

WeaponAltar::~WeaponAltar() {
}