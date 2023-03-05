#include "../../includes/location/order_beer.h"
#include <iostream>

void OrderBeer::point_player(Player *obj) {
    player = obj;
}

Location* OrderBeer::making_a_choice() {
    char i {};

    if ((*player).equipment.return_gold() >= 5) {
        std::cout<<"You drink a beer\n\n";
        (*player).equipment.remove_gold(5);
        (*player).drinking();
    }
    else
        std::cout<<"- This is not a charity concert - innkeeper said - beer costs 5 gold.\n";

    std::cout<<"\nPress any key to continue: ";
    std::cin>>i;
    switch (i) {
        case '6': clear(); equipment_menu(); break;
        case '7': clear(); load_menu(); break;
        case '8': clear(); save_menu(); break;
        case '9': clear(); exit_menu(); break;
        default: break;
    }
    return related_locations.at(0);
}

OrderBeer::OrderBeer(std::string name_val)
    : Location(name_val) {
    }

OrderBeer::~OrderBeer() {
}