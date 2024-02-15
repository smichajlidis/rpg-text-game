#include <iostream>
#include "../../include/location/trade.h"

Trade::Trade(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val)
    : Location(name_val, description_val, choice_1_val, choice_2_val) {
    }

Trade::~Trade() {
}

