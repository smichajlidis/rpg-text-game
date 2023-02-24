#include "../../includes/location/selling.h"
#include <iostream>

void Selling::point_equipment(Equipment *obj) {
    equipment = obj;
}

void Selling::point_trade_goods(Equipment *obj) {
    trade_goods = obj;
}

Location* Selling::making_a_choice() {
    int choice {};
    (*equipment).display_equipment();
    Item *ptr = (*equipment).equipment_choice();
    std::cout<<(*ptr).return_name()<<" options:\n\n";
    std::cout<<"1. Sell\n";
    std::cout<<"2. See more\n";
    std::cout<<"0. Return\n\n";
    std::cout<<"What do you do? ";
    std::cin>>choice;

    switch (choice) {
        case 1: {
            std::cout<<"\n\nYou sold "<<(*ptr).return_name()<<"\n";
            (*equipment).add_gold((*ptr).return_price);
            cout<<"-"<<(*ptr).return_name()<<"\n";
            (*equipment).remove_item(*ptr);
            std::cout<<"Press any digit to continue: ";
            std::cin>>choice;
            break;
        }
        case 2: (*ptr).display_properties(); break;
        default: break;

    return related_locations.at(0);
}

Selling::Selling(std::string name_val)
    : Location(name_val) {
    }

Selling::~Selling() {
}