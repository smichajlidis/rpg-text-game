#include "../../include/location/buying.h"
#include "../../include/screen_stuff.h"
#include "../../include/equipment.h"
#include "../../include/item.h"

#include <iostream>

void Buying::point_equipment(Equipment *obj) {
    equipment = obj;
}

void Buying::point_trade_goods(Equipment *obj) {
    trade_goods = obj;
}

Location* Buying::making_a_choice() {
    char choice {};
        (*trade_goods).display_equipment();
        Item *ptr = (*trade_goods).equipment_choice();
        std::cout<<"\n";
    do {
        if (ptr) {
            std::cout<<(*ptr).return_name()<<" options:\n\n";
            std::cout<<"1. Buy\n";
            std::cout<<"2. See more\n";
            std::cout<<"0. Return\n\n";
            std::cout<<"What do you do? ";
            std::cin>>choice;
            switch (choice) {
                case '1': {
                    ScreenStuff screen_stuff;
                    screen_stuff.clear();
                    std::cout<<"\nYou bought "<<(*ptr).return_name()<<"\n\n";
                    (*equipment).remove_gold((*ptr).return_price());
                    std::cout<<"+"<<(*ptr).return_name()<<"\n";
                    (*equipment).add_item(ptr);
                    (*trade_goods).remove_item(ptr);
                    ptr = nullptr;
                    std::cout<<"\nPress any key to continue: ";
                    std::cin>>choice;
                    break;
                }
                case '2': {
                    ScreenStuff screen_stuff;
                    screen_stuff.clear();
                    (ptr)->show_details(); break;
                }
                case '6': clear(); equipment_menu(); break; //return related_locations.at(1); break;
                case '7': clear(); load_menu(); break; //return related_locations.at(1); break;
                case '8': clear(); save_menu(); break;//return related_locations.at(1); break;
                case '9': clear(); exit_menu(); break;//return related_locations.at(1); break;
                default: break;
            }
        }
    } while (choice == '2' && ptr!=nullptr);
    return related_locations.at(0);
}

Buying::Buying(std::string name_val)
    : Location(name_val) {
    }

Buying::~Buying() {
}