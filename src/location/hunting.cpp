#include <iostream>
#include "../../includes/location/hunting.h"

Location* Hunting::making_a_choice() {
    char choice {};
    std::cout<<"[creature meeting. You will can attack or moving forward. Hunting too.]\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

Hunting::Hunting(std::string name_val)
    : Location(name_val) {
}

Hunting::~Hunting() {
}