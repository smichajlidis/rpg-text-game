#include <iostream>
#include "../../includes/location/forest.h"

Location* Forest::making_a_choice() {
    char choice {};

    std::cin>>choice;
    switch (choice) {
        case '1': return related_locations.at(1); break;
        case '2': return related_locations.at(2); break;
        case '0': return related_locations.at(0); break;
        default: return related_locations.at(1); break;
    }
}

Forest::Forest(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val)
    : Location(name_val, description_val, choice_1_val, choice_2_val) {
    }

Forest::~Forest() {
}

