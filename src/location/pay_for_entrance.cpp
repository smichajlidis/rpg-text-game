#include "../../include/location/pay_for_entrance.h"
#include "../../include/creature/player.h"

#include <iostream>

// Location* PayForEntrance::making_a_choice() {
//     char choice {};

//     if ((*player).equipment.return_gold() >= 1000) {
//         std::cout<<"- Oh, thank You stranger and welcome to the other side!\n\n";
//         std::cout<<"[gold - 1000]\n\n";
//         std::cout<<"The game is OVER - you WIN!\n\n";
//         change_i();
//     }
//     else
//         std::cout<<"- You better not mess with us! Go away and come back when you will have enough money!.\n\n";

//     std::cout<<"\nPress any key to continue: ";
//     std::cin>>choice;
//     return related_locations.at(0);
// }

void PayForEntrance::change_i() {
    *i_ptr = 2; //just not zero and not one
}

void PayForEntrance::get_i_ptr(int* i) {
    i_ptr = i;
}



PayForEntrance::PayForEntrance() {}
PayForEntrance::~PayForEntrance() {
}