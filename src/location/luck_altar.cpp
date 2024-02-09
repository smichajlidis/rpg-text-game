#include "../../include/location/luck_altar.h"
#include "../../include/creature/player.h"

#include <iostream>

Location* LuckAltar::making_a_choice() {
    char choice;
    if ((*player).return_gold()>100) {
        (*player).remove_gold(100);
        (*player).increase_luck(10);
        std::cout<<"You sacrifice 100 gold and get 5 luck\n\n";
    }
    else
        std::cout<<"You don't have enough gold to sacrifice\n\n";
    std::cout<<"Press any key to continue";
    std::cin>>choice;
    return related_locations.at(0);
}

LuckAltar::LuckAltar(std::string name_val)
    : Location(name_val) {
}

LuckAltar::~LuckAltar() {
}