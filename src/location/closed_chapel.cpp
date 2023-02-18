#include "../../includes/location/closed_chapel.h"
#include <iostream>

void ClosedChapel::display_location() {
    std::cout<<description<<std::endl;
}

ClosedChapel::ClosedChapel(std::string name_val, std::string description_val)
    : Location(name_val, description_val) {
    }

ClosedChapel::~ClosedChapel() {
}