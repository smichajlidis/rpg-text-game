#include <iostream>
#include <ctime>
#include "../../includes/location/hunting.h"

Location* Hunting::making_a_choice() {
    srand(time(NULL));
    char choice {};
    bool trying_again {false};
    do {
        clear();
        (*player).display_top_bar();
        std::cout<<"You meet a deer\n\n";
        std::cout<<"1. Hunt\n";
        std::cout<<"0. Keep going\n\n";
        std::cout<<"What do you do? ";
        std::cin>>choice;
        clear();
        (*player).display_top_bar();
        if ((*player).have_a_bow() == false) {
            std::cout<<"You don't have a bow to hunt! Wanna throw stones or what?!\n\n";
            std::cout<<"Press any key to continue: ";
            std::cin>>choice;
        }
        else {
            switch ((std::rand() % 3) + 1) {
                case 1: {
                    trying_again = false;
                    std::cout<<"You made it - the deer was hunted!\n\n";
                    int amount {rand() % 4};
                    for (int i {0}; i < amount; i++) {
                        Item* drop = related_items.at(std::rand() % related_items.size());
                        (*player).equipment.add_item(drop);
                        std::cout<<"[+ "<<(*drop).return_name()<<"]\n";
                    }
                    std::cout<<"\n";
                    break; 
                }
                case 2: {
                    trying_again = true;
                    std::cout<<"You miss but the deer didn't startle - you can try again\n\n";
                    break;
                }
                default: {
                    trying_again = false;
                    std::cout<<"You miss and deer ran away\n\n";
                    break;
                }
            }
            std::cout<<"Press any key to continue: ";
            std::cin>>choice;
        }
    } while (trying_again == true);
    return related_locations.at(0);
}

Hunting::Hunting(std::string name_val)
    : Location(name_val) {
}

Hunting::~Hunting() {
}