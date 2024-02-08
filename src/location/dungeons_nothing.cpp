#include <iostream>
#include "../../include/location/dungeons_nothing.h"

Location* DungeonsNothing::making_a_choice() {
    char choice {};
    std::cout<<"You found nothing this time\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

DungeonsNothing::DungeonsNothing(std::string name_val)
    : Location(name_val) {
}

DungeonsNothing::~DungeonsNothing() {
}