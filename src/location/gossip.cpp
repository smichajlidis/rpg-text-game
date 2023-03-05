#include <iostream>
#include "../../includes/location/gossip.h"

Location* Gossip::making_a_choice() {
    char choice {};
    std::cout<<"You know it's not nice to gossip? Shame on you!\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    switch (choice) {
        case '6': clear(); equipment_menu(); return related_locations.at(1); break;
        case '7': clear(); load_menu(); return related_locations.at(1); break;
        case '8': clear(); save_menu(); return related_locations.at(1); break;
        case '9': clear(); exit_menu(); return related_locations.at(1); break;
        default: return related_locations.at(0); break;
    }
    return related_locations.at(0); 
} 

Gossip::Gossip(std::string name_val)
    : Location(name_val) {
}

Gossip::~Gossip() {
}