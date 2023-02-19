#include <iostream>
#include "../../includes/location/forest.h"

void Forest::making_a_choice() {
    int choice {};
    std::cin>>choice;
    switch (choice) {
        case 1: std::cout<<"Let's explore!"; break;
        case 2: std::cout<<"Where are these guys?"; break;
        case 0: std::cout<<"Come back to the square"; break;
        default: std::cout<<"Choose allowed digit"; break;
    }
}

Forest::Forest(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val)
    : Location(name_val, description_val, choice_1_val, choice_2_val) {
    }

Forest::~Forest() {
}

