#include "../include/NPC.hpp"

#include <iostream>

void NPC::printLocation() {
    srand(time(NULL));
    std::cout<<greetings.at(std::rand() % greetings.size());
    
    this->printDescriptions();
}