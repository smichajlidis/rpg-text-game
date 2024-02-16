#include "../include/ExitingMenu.hpp"

#include <iostream>

void ExitingMenu::displayExitingMenu() {
    char choice {};
    header_displayer.displayHeader();
    std::cout<<"If you don't have your game saved yet here will be a question about if you want to save your progress.\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}

// Function below was an equipment menu from Location class. Not used anymore but I leave it here,
// maybe just for inspiration?

// void Location::equipment_menu() {
//     std::string choice {};
//   //  (*player).equipment.display_equipment();
//     if (!(*player).equipment.is_empty()) {
//         do {
//             //clear();
//             std::cout<<"\n== YOUR EQUIPMENT ==\n\n";
//             (*player).equipment.display_equipment();
//             std::cout<<"\nPass the number of an item to show options or pass any other key to return: ";
//             std::cin>>choice;
//             bool is_number {true};
//             for (char const &ch : choice) {
//             if (std::isdigit(ch) == 0) 
//                 is_number = false;
//             }
//             if (is_number == false) {
//              //   std::cout<<"\nYou have to pass a corrent value (wrong char!)";
//                 choice = "0";
//             }
//             else {
//                 int position {stoi(choice)-1};
//                 int size {static_cast<int>((*player).equipment.items.size())};
//                 if (position < 0 || position >= size) {
//                   //  std::cout<<"\nYou have to pass a correct value";
//                     choice = "0";
//                 }
//                 else {
//                     char i {};
//                     std::cout<<"\n1. Show details\n";
//                     std::cout<<"2. Use\n\n";
//                     std::cout<<"0. Return\n\n";
//                     std::cout<<"What do you want to do? ";
//                     std::cin>>i;
//                         switch (i) {
//                             case '1': {
//                                 (*(*player).equipment.items.at(position)).show_details();
//                                 std::cout<<"\nPress any key to continue";
//                                 std::cin>>i;
//                                 break;
//                             }
//                             case '2': {
//                                 if ((*(*player).equipment.items.at(position)).return_class_name() == "weapon")
//                                     (*player).active_weapon = (*player).equipment.items.at(position);
//                                 std::cout<<"\n"<<(*player).active_weapon->return_name()<<" is now your active weapon\n";
//                                     std::cout<<"\nPress any key to continue: ";
//                                     std::cin>>choice;
//                                 break;
//                             }
//                                      break;
//                             default: break;
//                     }                
//                 }
//                // std::cout<<"\nPress any key to return: ";
//                // std::cin>>choice;
//             }
//         } while (stoi(choice) != 0);
//     }
//     else {
//         std::cout<<"\nYour equipment is empty - press any key to return: ";
//         std::cin>>choice;
//     }
// }