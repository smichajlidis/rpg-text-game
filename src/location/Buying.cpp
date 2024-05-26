#include "../../include/location/Buying.hpp"

#include <iostream>

Buying::Buying(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : NPCTrade(player, game_state, description, choice_1, choice_2) {

    npc = game_state->getNPC("innkeeper");

    related_locations.push_back("selling");
    related_locations.push_back("approaching_innkeeper");
}

void Buying::printLocation() {
    std::cout << descriptions.at(0) << "\n\n";
    npc->printEquipment();
    std::cout << std::endl;
    std::cout << equipment.size() + 1 << ". " << descriptions.at(1) << std::endl;
    std::cout << equipment.size() + 2 << ". " << descriptions.at(2) << std::endl;
    std::cout << "\nWhat do you want? ";
} 