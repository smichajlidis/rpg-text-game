#include "../../includes/location/buying.h"
#include "../../includes/screen_stuff.h"
#include <iostream>

void Buying::point_equipment(Equipment *obj) {
    equipment = obj;
}

void Buying::point_trade_goods(Equipment *obj) {
    trade_goods = obj;
}

Location* Buying::making_a_choice() {
    int choice {};
    do {
        (*trade_goods).display_equipment();
        Item *ptr = (*trade_goods).equipment_choice();
        if (ptr) {
            std::cout<<(*ptr).return_name()<<" options:\n\n";
            std::cout<<"1. Buy\n";
            std::cout<<"2. See more\n";
            std::cout<<"0. Return\n\n";
            std::cout<<"What do you do? ";
            std::cin>>choice;
            switch (choice) {
                case 1: {
                    std::cout<<"\n\nYou bought "<<(*ptr).return_name()<<"\n";
                    (*equipment).remove_gold((*ptr).return_price());
                    std::cout<<"+"<<(*ptr).return_name()<<"\n";
                    (*equipment).add_item(ptr);
                    (*trade_goods).remove_item(ptr);
                    std::cout<<"Press any digit to continue: ";
                    std::cin>>choice;
                    break;
                }
                case 2: {
                    ScreenStuff screen_stuff;
                    screen_stuff.clear();
                    (ptr)->show_details(); break;
                }
                default: break;
            }
        }
    } while (choice == 2);
    return related_locations.at(0);
}

Buying::Buying(std::string name_val)
    : Location(name_val) {
    }

Buying::~Buying() {
}