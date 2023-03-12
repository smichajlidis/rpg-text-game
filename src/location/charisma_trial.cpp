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
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice; 
    return related_locations.at(0);
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