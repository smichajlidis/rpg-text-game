#include <iostream>
#include "../../includes/location/square.h"

void Square::making_a_choice() {
    int choice {};
    std::cin>>choice;
    switch (choice) {
        case 1: std::cout<<"Let's go for a drink"; break;
        case 2: std::cout<<"Hello trees!"; break;
        case 3: std::cout<<"Have to pray.."; break;
        case 0: std::cout<<"Come back to the square"; break;
        default: std::cout<<"Choose allowed digit"; break;
    }
}

Square::Square(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val)
    : Location(name_val, description_val, choice_1_val, choice_2_val, choice_3_val) {
    }

Square::~Square() {
}

