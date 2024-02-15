#include "../../include/location/strength_altar.h"
#include "../../include/creature/player.h"

#include <iostream>

// Location* StrengthAltar::making_a_choice() {
//     char choice;
//     if ((*player).return_gold()>100) {
//         (*player).remove_gold(100);
//         (*player).increase_strength(10);
//         std::cout<<"You sacrifice 100 gold and get 10 strength\n\n";
//     }
//     else
//         std::cout<<"You don't have enough gold to sacrifice\n\n";
//     std::cout<<"Press any key to continue";
//     std::cin>>choice;
//     return related_locations.at(0);
// }

StrengthAltar::StrengthAltar(std::string name_val)
    : Location(name_val) {
}

StrengthAltar::~StrengthAltar() {
}