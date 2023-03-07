#include <iostream>
#include "../../includes/location/forest_exploration.h"

Location* ForestExploration::making_a_choice() {
    char choice;
    std::cout<<"Forest exploration...";
    std::cout<<"\n\nPress any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

ForestExploration::ForestExploration(std::string name_val)
    : Location(name_val) {
}

ForestExploration::~ForestExploration() {
}