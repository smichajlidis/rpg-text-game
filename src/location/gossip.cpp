#include <iostream>
#include "../../includes/location/gossip.h"

Location* Gossip::making_a_choice() {
    char choice {};
    std::cout<<"You know it's not nice to gossip? Shame on you!\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0); 
} 

Gossip::Gossip(std::string name_val)
    : Location(name_val) {
}

Gossip::~Gossip() {
}