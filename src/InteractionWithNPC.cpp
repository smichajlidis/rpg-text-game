#include "../include/InteractionWithNPC.hpp"

#include <iostream>

void InteractionWithNPC::printLocation() {
    srand(time(NULL));
    if (npc) {
        std::cout << "[ATTITUDE: " << npc->getAttitudeToPlayer() << "/100]\n\n";
    }
    if (sentences.size()) {
        std::cout<<sentences.at(std::rand() % sentences.size());
    }
    
    this->printDescriptions();
}

void InteractionWithNPC::addNPC(std::shared_ptr<NPC> val) {
    npc = std::move(val);
}