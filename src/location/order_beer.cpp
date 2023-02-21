#include "../../includes/location/order_beer.h"
#include <iostream>

void OrderBeer::point_player(Player *obj) {
    player = obj;
}

void OrderBeer::display_event() {
    if ((*player).equipment.return_gold() >= 5) {
        std::cout<<"You drink a beer";
        (*player).equipment.remove_gold(5);
        std::cout<<"gold -5";
    }
    else
        std::cout<<"- This is not a charity concert - innkeeper said - beer costs 5 gold.";

}

Location* OrderBeer::making_a_choice() {
    int choice {};
    std::cin>>choice;
    switch (choice) {
        case 1: return related_locations.at(1); break;
        case 2: return related_locations.at(2); break;
        case 0: return related_locations.at(0); break;
        default: return related_locations.at(1); break;
    }
}

OrderBeer::OrderBeer(std::string name_val)
    : Location(name_val) {
    }

OrderBeer::~OrderBeer() {
}