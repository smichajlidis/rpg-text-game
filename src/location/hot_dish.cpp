#include "../../includes/location/hot_dish.h"
#include <iostream>

Location* HotDish::making_a_choice() {
    int i {};

    if ((*equipment_ptr).return_gold() >= 25) {
        std::cout<<"You eat a hot dish\n\n";
        (*equipment_ptr).remove_gold(25);
        (*player_ptr).increase_hp(20);
    }
    else
        std::cout<<"- This is not a charity concert - innkeeper said - hot dish costs costs 25 gold.\n";

    std::cout<<"\nPass any digit to return: ";
    std::cin>>i;

    return related_locations.at(0);
}

HotDish::HotDish(std::string name_val)
    : Location(name_val), PointPlayer(), PointEquipment()  {
    }

HotDish::~HotDish() {
}