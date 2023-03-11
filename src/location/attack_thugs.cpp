#include <iostream>
#include "../../includes/location/attack_thugs.h"

Location* AttackThugs::making_a_choice() {
    char choice {};
    std::cout<<"Attack!!!\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

AttackThugs::AttackThugs(std::string name_val)
    : Location(name_val) {
}

AttackThugs::~AttackThugs() {
}