#include <iostream>
#include "../../include/location/found_nothing.h"

Location* FoundNothing::making_a_choice() {
    char choice {};
    std::cout<<"You found nothing this time.\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

FoundNothing::FoundNothing(std::string name_val)
    : Location(name_val) {
}

FoundNothing::~FoundNothing() {
}