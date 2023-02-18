#include <iostream>
#include "../../includes/location/tavern.h"

void Tavern::display_location() {
    std::cout<<description<<std::endl;
    std::cout<<choice_1<<std::endl;
    std::cout<<choice_2<<std::endl;
    std::cout<<choice_3<<std::endl;
}

Tavern::Tavern(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val)
    : Location(name_val, description_val), choice_1 {choice_1_val}, choice_2 {choice_2_val}, choice_3 {choice_3_val}, choice_4 {choice_4_val} {
    }

Tavern::~Tavern() {
}

