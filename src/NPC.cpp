#include "../include/NPC.hpp"

#include <iostream>

void NPC::printLocation() {
    srand(time(NULL));
    std::cout << "[ATTITUDE: " << attitude_to_player << "/100]\n\n ";
    std::cout<<greetings.at(std::rand() % greetings.size());
    
    this->printDescriptions();
}