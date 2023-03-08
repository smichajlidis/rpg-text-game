#include <iostream>
#include "../../includes/location/dungeons_attack.h"

Location* DungeonsAttack::making_a_choice() {
    char choice {};
    std::cout<<"[enemy_attack(), place for battle engine]\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

DungeonsAttack::DungeonsAttack(std::string name_val)
    : Location(name_val) {
}

DungeonsAttack::~DungeonsAttack() {
}