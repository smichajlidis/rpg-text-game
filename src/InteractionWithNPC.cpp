#include "../include/InteractionWithNPC.hpp"

#include <iostream>

void InteractionWithNPC::printLocation() {
    srand(time(NULL));
    std::cout << "[ATTITUDE: " << attitude_to_player << "/100]\n\n";
    if (sentences.size()) {
        std::cout<<sentences.at(std::rand() % sentences.size());
    }
    
    this->printDescriptions();
}

void InteractionWithNPC::increaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player + val <= 100) ? attitude_to_player + val : 100);
}

void InteractionWithNPC::decreaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player - val >= 0) ? attitude_to_player - val : 0);
}