#include <iostream>
#include "../../includes/location/forest_attack.h"

Location* ForestAttack::making_a_choice() {
    char choice {};
    int hit {};
    srand(time(NULL)); 
    Creature* enemy = (related_creatures.at(std::rand() % related_creatures.size()))->clone();
    std::cout<<"You have been attacked by "<<enemy->return_name()<<"\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    do {
        clear();
        (*player).display_top_bar();
        (*enemy).display_enemy();
        std::cout<<"1. Attack\n";
        std::cout<<"0. Run\n\n";
        std::cout<<"What you do? ";
        std::cin>>choice;
        switch (choice) {
            case '1': {
                clear();
                (*player).display_top_bar();
                (*enemy).display_enemy();
                hit = (*player).return_hitForce();
                std::cout<<"You hit with "<<hit<<" force\n";
                (*enemy).decrease_hp(hit);
                if ((*enemy).return_hp() < 0) std::cout<<(*enemy).return_name()<<" defeated!\n";
                break;
            } 
            default: break;
        }
        if ((*enemy).return_hp() > 0) {
            hit = (*enemy).return_hitForce();
            std::cout<<"Enemy hit with "<<hit<<" force\n";
            (*player).decrease_hp(hit);
            std::cout<<"\nPress any key to continue: ";
            std::cin>>choice;
        }
    } while (choice == '1' && (*enemy).return_hp() > 0);
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

ForestAttack::ForestAttack(std::string name_val)
    : Location(name_val) {
}

ForestAttack::~ForestAttack() {
}