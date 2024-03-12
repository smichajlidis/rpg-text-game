#include "../include/NPC.hpp"

#include <iostream>

void NPC::printLocation() {
    srand(time(NULL));
    std::cout << "[ATTITUDE: " << attitude_to_player << "/100]\n\n";
    if (sentences.size()) {
        std::cout<<sentences.at(std::rand() % sentences.size());
    }
    
    this->printDescriptions();
}