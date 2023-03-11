#include <iostream>
#include "../../includes/location/charisma_trial.h"

Location* CharismaTrial::making_a_choice() {
    char choice {};
    std::cout<<"Charisma trial...\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

CharismaTrial::CharismaTrial(std::string name_val)
    : Location(name_val) {
}

CharismaTrial::~CharismaTrial() {
}