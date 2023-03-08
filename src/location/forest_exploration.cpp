#include <iostream>
#include <ctime>
#include "../../includes/location/forest_exploration.h"

Location* ForestExploration::making_a_choice() {
    char choice;
        std::cout<<"1. Explore\n";
        std::cout<<"0. Return\n";
        std::cout<<"\nWhat you want to do? ";
        std::cin>>choice;
        switch (choice) {
            case '1': {
                srand(time(NULL));
                switch(std::rand() % 4 + 1) {
                    case 1: return related_locations.at(1); break;
                    case 2: return related_locations.at(2); break;
                    case 3: return related_locations.at(3); break;
                    default: return related_locations.at(4); break;
                }
            break;
            }
            case '6': clear(); equipment_menu(); return related_locations.at(5); break;
            case '7': clear(); load_menu(); return related_locations.at(5); break;
            case '8': clear(); save_menu(); return related_locations.at(5); break;
            case '9': clear(); exit_menu(); return related_locations.at(5); break;
            default: return related_locations.at(0); break;
        }
    return related_locations.at(0); 
}

ForestExploration::ForestExploration(std::string name_val)
    : Location(name_val) {
}

ForestExploration::~ForestExploration() {
}