#include <iostream>
#include "../../includes/location/forest_exploration.h"

Location* ForestExploration::making_a_choice() {
    char choice;
  //  event_draw();
    do {
        clear();
        (*player).display_top_bar();
        std::cout<<"1. Explore\n";
        std::cout<<"0. Return\n";
        std::cout<<"\nWhat you want to do? ";
        std::cin>>choice;
        switch (choice) {
            case '1':  clear(); (*player).display_top_bar(); event_draw(); break;
            default: return related_locations.at(0); break;
        }
    } while (choice == '1');
    return related_locations.at(0); 
}

ForestExploration::ForestExploration(std::string name_val)
    : Location(name_val) {
}

ForestExploration::~ForestExploration() {
}