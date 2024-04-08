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
    printDescription();
    std::cout << "\n\n";
    printChoices();
}