#include "../../include/location/Priest.hpp"

#include <iostream>

Priest::Priest(const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
        : NPC(description, choice_1, choice_2, choice_3) {
        greetings.push_back("He is a wise man who invented beer.");
        greetings.push_back("Milk is for babies. When you grow up you have to drink beer.");
        greetings.push_back("Life is too short to drink cheap beer.");
        greetings.push_back("What care I how time advances, I am drinking ale today.");
        greetings.push_back("Good people drink good beer.");
        greetings.push_back("I work until beer o’clock.");
        greetings.push_back("Beer makes you feel the way you ought to feel without beer.");
        greetings.push_back("I am not addicted to beer… It’s addicted to me.");
        greetings.push_back("Everybody needs to believe in something. I believe I’ll have another beer.");
        greetings.push_back("Beer… now there’s a temporary solution!");
        greetings.push_back("Beer. The best damn drink in the world!");
        greetings.push_back("Beer is proof that God loves us and wants us to be happy.");
        greetings.push_back("The mouth of a perfectly happy man is filled with beer.");
        greetings.push_back("Fermentation may have been a greater discovery than fire.");
        greetings.push_back("He who drinks beer sleeps well. he who sleeps well cannot sin. He who does not sin goes to heaven. Amen.");
        greetings.push_back("Let no man thirst for good beer.");
        greetings.push_back("On victory, you deserve beer, in defeat, you need it.");
}


// Location* Priest::making_a_choice() {
//     char choice {};
//     if ((*player_ptr).return_drunk()>0) {
//         display_npc_details();
//         std::cout<<"\n\n";
//         greeting();
//         std::cout<<"\n\n";
//         std::cout<<"1. Order two beers for you\n";
//         std::cout<<"2. Ask for a chapel\n";
//         std::cout<<"0. Return\n\n";
//         std::cout<<"What do you do? ";
//         std::cin>>choice;
//         switch (choice) {
//             case '1': {
//                 std::cout<<"\n";
//                 (*player_ptr).equipment.remove_gold(10);
//                 (*player_ptr).drinking();
//                 increase_favor();
//                 std::cout<<"\nPress any key to continue: ";
//                 std::cin>>choice;
//                 return related_locations.at(1); break;
//             }
//             case '2': {
//                 if ((equipment.is_chapel_key() == false)) {
//                     std::cout<<"I already gave you the key. Don't say you lost it! Gods, I don't have another...\n\n";
//                     std::cout<<"Press any key to continue: ";
//                     std::cin>>choice;
//                     return related_locations.at(1); break;
//                 }
//                 else if (favor >= 80) {
//                     std::cout<<"\nDidn't know that you are so pious! Ok, I have a gift for you.\n";
//                     std::cout<<"<he gives you a key>\n\n"; 
//                     std::cout<<"[+ chapel key]\n\n";
//                     std::cout<<"<when you walk away from him he screams after you:>\n";
                
//                     Item *ptr = equipment.items.at(0);
//                     (*player_ptr).equipment.add_item(ptr);
//                     equipment.remove_item(ptr);
                
//                     std::cout<<"And pray for your friend too!\n";
//                     std::cout<<"\nPress any key to continue: ";
//                     std::cin>>choice;
//                     return related_locations.at(0); break;
//                 }
//                 else {
//                     std::cout<<"\n- Not your bussiness stranger.\n\n";
//                     decrease_favor();
//                     std::cout<<"\nPress any key to continue: ";
//                     std::cin>>choice;
//                     return related_locations.at(1); break;
//                 }
//             }
//             case '6': clear(); equipment_menu(); return related_locations.at(1); break;
//             case '7': clear(); load_menu(); return related_locations.at(1); break;
//             case '8': clear(); save_menu(); return related_locations.at(1); break;
//             case '9': clear(); exit_menu(); return related_locations.at(1); break;
//             default: return related_locations.at(0); break;
//         }
//         return related_locations.at(0);
//     }
//     else {
//         std::cout<<"I don't trust sober people, leave me alone!\n\n";
//         std::cout<<"Press any key to continue: ";
//         std::cin>>choice;
//         return related_locations.at(0);
//     }
// }
