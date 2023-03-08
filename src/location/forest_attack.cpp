#include <iostream>
#include "../../includes/location/forest_attack.h"

Location* ForestAttack::making_a_choice() {
    char choice {};
    srand(time(NULL));
    Creature* ptr = related_creatures.at(std::rand() % related_creatures.size());
    std::cout<<"You have been attacked by "<<ptr->return_name()<<"\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

ForestAttack::ForestAttack(std::string name_val)
    : Location(name_val) {
}

ForestAttack::~ForestAttack() {
}