#include <iostream>
#include "../../include/location/chapels_door.h"
#include "../../include/creature/player.h"

// Location* ChapelsDoor::making_a_choice() {
//     char choice;
//     while ((*player).is_chapel_key()) {
//         std::cout<<"You open the door with a key\n\n";
//         std::cout<<"Press any key to continue: ";
//         std::cin>>choice;
//         return related_locations.at(1);
//     }
//     std::cout<<"The door is closed. Nothing to do.\n\n";
//     std::cout<<"Press any key to continue: ";
//     std::cin>>choice;
//     return related_locations.at(0);
// }

ChapelsDoor::ChapelsDoor(std::string name_val)
    : Location(name_val) {
}

ChapelsDoor::~ChapelsDoor() {
}