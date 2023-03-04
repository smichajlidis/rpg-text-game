#include <iostream>
#include <ctime>
#include "../../includes/location/ladies.h"

void Ladies::greeting() {
    std::vector <std::string> greetings {
        "- Hello",
        "- Hi",
    };
    srand(time(NULL));
    std::cout<<greetings.at(std::rand() % greetings.size());
}

Location* Ladies::making_a_choice() {
    display_npc_details();
    std::cout<<"\n\n";
    greeting();
    std::cout<<"\n\n";
    std::cout<<"1. Go upstairs\n";
    std::cout<<"2. Just flirt with them\n";
    std::cout<<"0. Return\n\n";
    std::cout<<"What do you do? ";
    int choice {};
    std::cin>>choice;
    switch (choice) {
        case 1: {
            std::cout<<"Going apstairs...\n";
            std::cout<<"\nPress 0 to continue: ";
            std::cin>>choice;
            return related_locations.at(1); break;
        }
        case 2: {
            std::cout<<"Flirting\n";
            std::cout<<"\nPress 0 to continue: ";
            std::cin>>choice; 
            return related_locations.at(1); break;
        }
        default: return related_locations.at(0); break;
    }
    return related_locations.at(1);
}

Ladies::Ladies(std::string name_val)
    : Location(name_val), NPC(name_val) {
    }

Ladies::~Ladies() {
}

