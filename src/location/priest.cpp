#include <iostream>
#include "../../includes/location/priest.h"

Location* Priest::making_a_choice() {
    int choice {};
    std::cin>>choice;
    switch (choice) {
      //  case 1: return related_locations.at(1); break;
        default: return related_locations.at(0); break;
    }
}

Priest::Priest(std::string name_val)
    : Location(name_val), NPC(name_val) {
    }

Priest::~Priest() {
}

