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

void NPC::increaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player + val <= 100) ? attitude_to_player + val : 100);
}

void NPC::decreaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player - val >= 0) ? attitude_to_player - val : 0);
}