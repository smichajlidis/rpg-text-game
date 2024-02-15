#include "../../include/location/hot_dish.h"
#include "../../include/creature/player.h"

#include <iostream>

// Location* HotDish::making_a_choice() {
//     char i {};

//     if ((*player_ptr).equipment.return_gold() >= 25) {
//         std::cout<<"You eat a hot dish\n\n";
//         (*player_ptr).equipment.remove_gold(25);
//         (*player_ptr).increase_hp(20);
//     }
//     else
//         std::cout<<"- This is not a charity concert - innkeeper said - hot dish costs costs 25 gold.\n";

//     std::cout<<"\nPress any key to continue: ";
//     std::cin>>i;
//     switch (i) {
//         case '6': clear(); equipment_menu(); return related_locations.at(1); break;
//         case '7': clear(); load_menu(); return related_locations.at(1); break;
//         case '8': clear(); save_menu(); return related_locations.at(1); break;
//         case '9': clear(); exit_menu(); return related_locations.at(1); break;
//         default: return related_locations.at(0); break;
//     }
//     return related_locations.at(0);
// }

HotDish::HotDish(std::string name_val)
    : Location(name_val), PointPlayer()  {
    }

HotDish::~HotDish() {
}