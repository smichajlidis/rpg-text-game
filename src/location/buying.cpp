#include "../../includes/location/buying.h"
#include <iostream>

void Buying::point_equipment(Equipment *obj) {
    equipment = obj;
}

void Buying::point_trade_goods(Equipment *obj) {
    trade_goods = obj;
}

Location* Buying::making_a_choice() {
    int choice {};
    (*trade_goods).display_equipment();
    Item *ptr = (*equipment).equipment_choice();
    std::cout<<(*ptr).return_name()<<" options:\n\n";
    std::cout<<"1. Buy\n";
    std::cout<<"2. See more\n";
    std::cout<<"0. Return\n\n";
    std::cout<<"What do you do? ";
    std::cin>>choice;
    return related_locations.at(0);
}

Buying::Buying(std::string name_val)
    : Location(name_val) {
    }

Buying::~Buying() {
}