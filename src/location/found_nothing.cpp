#include <iostream>
#include "../../includes/location/forest_attack.h"

Location* ForestAttack::making_a_choice() {
    char choice {};
    std::cout<<"[enemy_attack(), place for battle engine]\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

ForestAttack::ForestAttack(std::string name_val)
    : Location(name_val) {
}

ForestAttack::~ForestAttack() {
}