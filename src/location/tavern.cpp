#include <iostream>
#include "../../includes/location/tavern.h"

void Tavern::making_a_choice() {
    int choice {};
    std::cin>>choice;
    switch (choice) {
        case 1: std::cout<<"Innkeeper"; break;
        case 2: std::cout<<"Gamblers"; break;
        case 3: std::cout<<"Priest"; break;
        case 4: std::cout<<"Ladies"; break;
        case 0: std::cout<<"Come back to the square"; break;
        default: std::cout<<"Choose allowed digit"; break;
    }
}

Tavern::Tavern(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val)
    : Location(name_val, description_val, choice_1_val, choice_2_val, choice_3_val, choice_4_val) {
    }

Tavern::~Tavern() {
}

