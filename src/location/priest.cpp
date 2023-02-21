#include <iostream>
#include "../../includes/location/priest.h"

Location* Priest::making_a_choice() {
    int choice {};
    std::cin>>choice;
    switch (choice) {
        case 1: return related_locations.at(1); break;
        default: return related_locations.at(0); break;
    }
}

Priest::Priest(std::string name_val, std::string description_val, std::string choice_1_val)
    : Location(name_val, description_val, choice_1_val) {
    }

Priest::~Priest() {
}

