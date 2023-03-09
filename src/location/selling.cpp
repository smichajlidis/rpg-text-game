#include "../../includes/location/selling.h"
#include "../../includes/screen_stuff.h"
#include <iostream>

void Selling::point_equipment(Equipment *obj) {
    equipment = obj;
}

void Selling::point_trade_goods(Equipment *obj) {
    trade_goods = obj;
}

Location* Selling::making_a_choice() {
    char choice {};
    if ((*equipment).items.size() != 0) {
      //  do {
            clear();
            (*player).display_top_bar();
            (*equipment).display_equipment();
                Item *ptr = (*equipment).equipment_choice();
                std::cout<<"\n";
                if (ptr) {
                    std::cout<<(*ptr).return_name()<<" options:\n\n";
                    std::cout<<"1. Sell\n";
                    std::cout<<"2. See more\n";
                    std::cout<<"0. Return\n\n";
                    std::cout<<"What do you do? ";
                    std::cin>>choice;
                    switch (choice) {
                        case '1': {
                            ScreenStuff screen_stuff;
                            screen_stuff.clear();
                            std::cout<<"\nYou sold "<<(*ptr).return_name()<<"\n\n";
                            (*equipment).add_gold((*ptr).return_price());
                            std::cout<<"-"<<(*ptr).return_name()<<"\n";
                            (*trade_goods).add_item(ptr);
                            if ((*player).active_weapon == ptr) (*player).active_weapon = nullptr;
                            (*equipment).remove_item(ptr);
                            std::cout<<"\nPress any key to continue: ";
                            std::cin>>choice;
                            break;
                        }
                        case '2': {
                            ScreenStuff screen_stuff;
                            screen_stuff.clear();
                            (ptr)->show_details(); break;
                        }
                        case '6': clear(); equipment_menu(); return related_locations.at(1); break;
                        case '7': clear(); load_menu(); return related_locations.at(1); break;
                        case '8': clear(); save_menu(); return related_locations.at(1); break;
                        case '9': clear(); exit_menu(); return related_locations.at(1); break;
                        default: break;
                    }
                }
      //  } while (choice != '0');
    }
    else {
        std::cout<<"Your equipment is empty\n\nPress any key to continue: ";
        std::cin>>choice;
    }
    return related_locations.at(0);
}

Selling::Selling(std::string name_val)
    : Location(name_val) {
    }

Selling::~Selling() {
}