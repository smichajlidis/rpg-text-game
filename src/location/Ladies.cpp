#include "../../include/location/Ladies.hpp"

#include <iostream>

Ladies::Ladies(const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : NPC(description, choice_1, choice_2, choice_3) {
    greetings.push_back("Guess what We are not wearing right now?");
    greetings.push_back("Olive juice. Say it fast.");
    greetings.push_back("When can we see you again? Pick a day that ends in <y>");
    greetings.push_back("Hey, stranger! Wait, why are we still strangers? Let's fix that..");
    greetings.push_back("We have a secret to tell you, but we want to tell you in person.");
    greetings.push_back("We hate everyone. But not you.");
    greetings.push_back("We are addicted to you, and we need another hit.");
    greetings.push_back("Want to make a beautiful memory together?");
    greetings.push_back("You were in our dreams last night. Wanna hear?");
    greetings.push_back("You're already thinking about us - we can feel it.");
    greetings.push_back("We can't focus today. We are too distracted thinking about you.");
    greetings.push_back("Our love language is physical touch. Want a present?");
    greetings.push_back("You are our dream man, baby.");
    greetings.push_back("We need you right now.");
}
// Location* Ladies::making_a_choice() {
//     display_npc_details();
//     std::cout<<"\n\n";
//     greeting();
//     std::cout<<"\n\n";
//     std::cout<<"1. Go upstairs\n";
//     std::cout<<"2. Just flirt with them\n";
//     std::cout<<"0. Return\n\n";
//     std::cout<<"What do you do? ";
//     char choice {};
//     std::cin>>choice;
//     switch (choice) {
//         case '0': return related_locations.at(0); break;
//         case '1': {
//             if ((*player_ptr).equipment.return_gold() >= 100) {
//                 std::cout<<"\n<you are going upstairs with them and.. having a good time>\n\n";
//                 (*player_ptr).restore_hp();
//                 (*player_ptr).equipment.remove_gold(100);
//                 (*player_ptr).increase_luck(1);
//             }
//             else
//                 std::cout<<"\n- Oh honey... You can't affort us. Please, come back with 100 gold.\n";
//             std::cout<<"\nPress any key to continue: ";
//             std::cin>>choice;
//             return related_locations.at(1); break;
//         }
//         case '2': {
//             if ((*player_ptr).using_charisma(favor)) {
//                 std::cout<<"\nSuccess, you got this!\n";
//                 (*player_ptr).increase_charisma(1);
//                 increase_favor();
//             }
//             else {
//                 std::cout<<"\nNo... that was wrong.\n";
//                 decrease_favor();
//             }
//             std::cout<<"\nPress any key to continue: ";
//             std::cin>>choice; 
//             return related_locations.at(1); break;
//         }
//         case '6': clear(); equipment_menu(); return related_locations.at(1); break;
//         case '7': clear(); load_menu(); return related_locations.at(1); break;
//         case '8': clear(); save_menu(); return related_locations.at(1); break;
//         case '9': clear(); exit_menu(); return related_locations.at(1); break;
//         default: return related_locations.at(1); break;
//     }
//     return related_locations.at(1);
// }
