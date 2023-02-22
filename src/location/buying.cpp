#include "../../includes/location/buying.h"
#include <iostream>

void Buying::point_equipment(Equipment *obj) {
    equipment = obj;
}

void Buying::point_trade_goods(Equipment *obj) {
    trade_goods = obj;
}

Location* Buying::making_a_choice() {

        return related_locations.at(0);
}

Buying::Buying(std::string name_val)
    : Location(name_val) {
    }

Buying::~Buying() {
}