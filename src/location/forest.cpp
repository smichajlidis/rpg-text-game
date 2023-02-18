#include <iostream>
#include "../../includes/location/forest.h"

void Forest::display_location() {
    std::cout<<description<<std::endl;
    std::cout<<choice_1<<std::endl;
    std::cout<<choice_2<<std::endl;
}

Forest::Forest(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val)
    : Location(name_val, description_val), choice_1 {choice_1_val}, choice_2 {choice_2_val} {
    }

Forest::~Forest() {
}

