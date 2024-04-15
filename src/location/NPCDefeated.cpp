#include "../../include/location/NPCDefeated.hpp"

#include <iostream>

NPCDefeated::NPCDefeated(std::shared_ptr<NPC> npc_val, std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1)
    : InteractionWithNPC(player, game_state, description, choice_1) {
    npc = npc_val;
    related_locations.push_back("forest");
}

void NPCDefeated::printLocation() {
    std::cout << "The " << npc->getName() << " is dead.";
    
    if (npc->getEquipmentSize()) {
        std::cout << "You've got:\n" << std::endl;
        npc->printEquipment();
    }
    std::uint32_t count = npc->getEquipmentSize();
    
    for (std::uint32_t i = 0; i < count; i++) {
        player->addItem(npc->getItemFromEquipment(i));
    }
    game_state->deleteNPC(npc->getName());
    std::cout << "\n\n";
    printChoices();
}

std::string NPCDefeated::getNextLocationName(std::uint32_t val) {
    return "forest";
}