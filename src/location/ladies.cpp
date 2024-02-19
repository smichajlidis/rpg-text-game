#include "../../include/location/ladies.h"
#include "../../include/creature/player.h"

#include <iostream>
#include <ctime>

void Ladies::printLocation() {
    greeting();
}

Creature* Ladies::clone() {
    Creature* ladies {nullptr};
    ladies = new Ladies;
    return ladies;
}

void Ladies::greeting() {
    std::vector <std::string> greetings {
        "- Guess what We are not wearing right now?",
        "- Olive juice. Say it fast.",
        "- When can we see you again? Pick a day that ends in <y>",
        "- Hey, stranger! Wait, why are we still strangers? Let's fix that..",
        "- We have a secret to tell you, but we want to tell you in person.",
        "- We hate everyone. But not you.",
        "- We are addicted to you, and we need another hit.",
        "- Want to make a beautiful memory together?",
        "- You were in our dreams last night. Wanna hear?",
        "- You're already thinking about us - we can feel it.",
        "- We can't focus today. We are too distracted thinking about you.",
        "- Our love language is physical touch. Want a present?",
        "- You are our dream man, baby.",
        "- We need you right now."
    };  
    srand(time(NULL));
    std::cout<<greetings.at(std::rand() % greetings.size());
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

Ladies::Ladies()
    : NPC() {
    }

Ladies::~Ladies() {
}

