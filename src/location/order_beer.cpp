#include "../../includes/location/order_beer.h"
#include <iostream>

void OrderBeer::point_player(Player *obj) {
    player = obj;
}

Location* OrderBeer::making_a_choice() {
    int i {};

    if ((*player).equipment.return_gold() >= 5) {
        std::cout<<"You drink a beer\n\n";
        (*player).equipment.remove_gold(5);
        (*player).drinking(20);
    }
    else
        std::cout<<"- This is not a charity concert - innkeeper said - beer costs 5 gold.\n";

    std::cout<<"\nPass any digit to return: ";
    std::cin>>i;

    return related_locations.at(0);
}

OrderBeer::OrderBeer(std::string name_val)
    : Location(name_val) {
    }

OrderBeer::~OrderBeer() {
}