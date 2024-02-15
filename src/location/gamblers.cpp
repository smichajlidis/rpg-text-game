#include "../../include/location/gamblers.h"
#include "../../include/creature/player.h"

#include <iostream>
#include <ctime>
#include <vector>

// Location* Gamblers::making_a_choice() {
//     char choice {};
//     std::cin>>choice;
//     int value {};
//     switch (choice) {
//         case '0': return related_locations.at(0); break;
//         case '1': value=5; break;
//         case '2': value=10; break;
//         case '3': value=25; break;
//         case '4': value=50; break;
//         case '5': value=100; break;
//         case '6': clear(); equipment_menu(); return related_locations.at(1); break;
//         case '7': clear(); load_menu(); return related_locations.at(1); break;
//         case '8': clear(); save_menu(); return related_locations.at(1); break;
//         case '9': clear(); exit_menu(); return related_locations.at(1); break;
//         default: return related_locations.at(1); break;
//     }

//     std::vector <int> results {};

//     srand(time(NULL));
//     std::cout<<"\nYou bet "<<value<<" gold and roll the dice. Your result is:\n\n";

//     for(int i {1}; i <= 6; i++) {
//         results.push_back((std::rand() %6)+1);
//     }

//     std::cout<<"First die: "<<results.at(0)<<std::endl;
//     std::cout<<"Second die: "<<results.at(1)<<std::endl;
//     std::cout<<"Third die: "<<results.at(2)<<std::endl;
//     std::cout<<"Fourth die: "<<results.at(3)<<std::endl;
//     std::cout<<"Fifth die: "<<results.at(4)<<std::endl;
//     std::cout<<"Sixth die: "<<results.at(5)<<std::endl;

//     std::cout<<"\nYour score is "<<results.at(0)<<" + "<<results.at(1)<<" + "<<results.at(2)<<" + "<<results.at(3)<<" + "<<results.at(4)<<" + "<<results.at(5)<<" = "<<results.at(0)+results.at(1)+results.at(2)+results.at(3)+results.at(4)+results.at(5)<<std::endl;
//     if(results.at(0)+results.at(1)+results.at(2)+results.at(3)+results.at(4)+results.at(5) > 22) {
//         std::cout<<"\nYou win!\n\n";
//         (*player_ptr).equipment.add_gold(value);
//     }
//     else {
//         std::cout<<"\nYou lose\n\n";
//         (*player_ptr).equipment.remove_gold(value);
//     }
//     std::cout<<"\nPress any key to continue: ";
//     std::cin>>choice;

//     return related_locations.at(0); 
    
// }

Gamblers::Gamblers(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val, std::string choice_5_val)
    : Location(name_val, description_val, choice_1_val, choice_2_val, choice_3_val, choice_4_val, choice_5_val), PointPlayer() {
    }

Gamblers::~Gamblers() {
}

