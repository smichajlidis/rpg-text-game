#include "../../includes/location/closed_chapel.h"
#include <iostream>

Location* ClosedChapel::making_a_choice() {
    int choice {};
    std::cin>>choice;
    switch (choice) {
        case 0: return related_locations.at(0); break;
        default: return related_locations.at(1); break;
    }
}

ClosedChapel::ClosedChapel(std::string name_val, std::string description_val)
    : Location(name_val, description_val) {
    }

ClosedChapel::~ClosedChapel() {
}