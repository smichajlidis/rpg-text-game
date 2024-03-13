#include "../include/InteractionWithNPC.hpp"

#include <iostream>

void InteractionWithNPC::printLocation() {
    srand(time(NULL));
    //std::cout << "[ATTITUDE: " << attitude_to_player << "/100]\n\n";
    if (sentences.size()) {
        std::cout<<sentences.at(std::rand() % sentences.size());
    }
    
    this->printDescriptions();
}