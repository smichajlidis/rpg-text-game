#include <iostream>
#include "../../includes/location/pay_for_entrance.h"

Location* PayForEntrance::making_a_choice() {
    char choice {};
    std::cout<<"Paying...\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

PayForEntrance::PayForEntrance(std::string name_val)
    : Location(name_val) {
}

PayForEntrance::~PayForEntrance() {
}