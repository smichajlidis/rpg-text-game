#include <iostream>
#include <ctime>
#include "../../includes/location/dungeons.h"

Location* Dungeons::making_a_choice() {
    char choice;
        std::cout<<"1. Explore\n";
        std::cout<<"0. Return\n";
        std::cout<<"\nWhat you want to do? ";
        std::cin>>choice;
        switch (choice) {
            case '1': {
                srand(time(NULL));
                switch(std::rand() % 3 + 1) {
                    case 1: return related_locations.at(1); break;
                    case 2: return related_locations.at(2); break;
                    default: return related_locations.at(3); break;
                }
            break;
            } 
            default: return related_locations.at(0); break;
        }
    return related_locations.at(0);
}

Dungeons::Dungeons(std::string name_val)
    : Location(name_val) {
}

Dungeons::~Dungeons() {
}
