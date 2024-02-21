#include "../include/NPC.hpp"

#include <iostream>

void NPC::printDescriptions() {
    srand(time(NULL));
    std::cout<<greetings.at(std::rand() % greetings.size());
}