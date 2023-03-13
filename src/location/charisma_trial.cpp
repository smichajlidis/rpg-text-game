#include <iostream>
#include "../../includes/location/charisma_trial.h"

Location* CharismaTrial::making_a_choice() {
    display_npc_details();
    std::cout<<"\n";
    char choice {};
    if ((*player).using_charisma(favor)) {
        std::cout<<"\nSuccess, you got this!\n";
        (*player).increase_charisma(1);
        increase_favor();
    }
    else {
        std::cout<<"\nNo... that was wrong.\n";
        decrease_favor();
    }
    if (favor == 100) {
        std::cout<<"\nYou are our good friend - just go for free! All the best!\n\n";
        std::cout<<"The game is OVER - you WIN!\n\n";
        change_i();
    }
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice; 
    return related_locations.at(0);
}

void CharismaTrial::change_i() {
    *i_ptr = 2; //just not zero and not one
}

void CharismaTrial::get_i_ptr(int* i) {
    i_ptr = i;
}


void CharismaTrial::greeting() {
}

Creature* CharismaTrial::clone() {
    Creature* thugs {nullptr};
    thugs = new CharismaTrial;
    return thugs;
}

CharismaTrial::CharismaTrial(std::string name_val)
    : Location(name_val), NPC(name_val) {
        favor=20;
}

CharismaTrial::~CharismaTrial() {
}