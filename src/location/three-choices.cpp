#include <iostream>
#include "../../includes/location/three-choices.h"

ThreeChoices::ThreeChoices(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val)
    : Location(name_val, description_val), choice_1 {choice_1_val}, choice_2 {choice_2_val}, choice_3 {choice_3_val} {
    }

ThreeChoices::~ThreeChoices() {
}

