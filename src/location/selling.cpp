#include "../../includes/location/selling.h"
#include <iostream>

void Selling::point_equipment(Equipment *obj) {
    equipment = obj;
}

void Selling::point_trade_goods(Equipment *obj) {
    trade_goods = obj;
}

Location* Selling::making_a_choice() {
   

    return related_locations.at(0);
}

Selling::Selling(std::string name_val)
    : Location(name_val) {
    }

Selling::~Selling() {
}