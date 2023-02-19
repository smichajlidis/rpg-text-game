#include "../../includes/location/closed_chapel.h"
#include <iostream>

void ClosedChapel::making_a_choice() {
    int choice {};
    std::cin>>choice;
    switch (choice) {
        case 0: std::cout<<"Come back to the square"; break;
        default: std::cout<<"Choose allowed digit"; break;
    }
}

ClosedChapel::ClosedChapel(std::string name_val, std::string description_val)
    : Location(name_val, description_val) {
    }

ClosedChapel::~ClosedChapel() {
}