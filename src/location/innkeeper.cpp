#include <iostream>
#include "../../include/location/innkeeper.h"

// Location* Innkeeper::making_a_choice() {
//     char choice {};
//     std::cin>>choice;
//     switch (choice) {
//         case '1': return related_locations.at(1); break;
//         case '2': return related_locations.at(2); break;
//         case '3': return related_locations.at(3); break;
//         case '4': return related_locations.at(4); break;
//         case '6': clear(); equipment_menu(); return related_locations.at(5); break;
//         case '7': clear(); load_menu(); return related_locations.at(5); break;
//         case '8': clear(); save_menu(); return related_locations.at(5); break;
//         case '9': clear(); exit_menu(); return related_locations.at(5); break;
//         case '0': return related_locations.at(0); break;
//         default: return related_locations.at(5); break;
//     }
// }

Innkeeper::Innkeeper(std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val)
    : Location(description_val, choice_1_val, choice_2_val, choice_3_val, choice_4_val) {
    }

Innkeeper::~Innkeeper() {
}

