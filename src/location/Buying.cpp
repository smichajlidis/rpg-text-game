#include "../../include/location/Buying.hpp"

#include <iostream>

Buying::Buying(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : NPCTrade(player, game_state, description, choice_1, choice_2) {

    npc = game_state->getNPC("innkeeper");

    related_locations.push_back("selling");
    related_locations.push_back("approaching_innkeeper");
}

void Buying::printLocation() {
    std::cout << descriptions.at(0) << "\n";
    npc->printEquipment();
    std::cout << std::endl;
    std::cout << npc->getEquipmentSize() + 1 << ". " << descriptions.at(1) << std::endl;
    std::cout << npc->getEquipmentSize() + 2 << ". " << descriptions.at(2) << std::endl;
    std::cout << "\nWhat do you want? ";
}

bool Buying::inputValidation(std::uint32_t) const {
    return ((npc->getEquipmentSize() + 2) ? true : false);
}

std::string Buying::getNextLocationName(std::uint32_t val) {
    if (val <= npc->getEquipmentSize()) {

        Item item = npc->getItemFromEquipment(val-1);
        npc->deleteItem(item.getName());
        player->decreaseGold(item.getValue());
        item.setAmountAsOne();
        player->addItem(std::move(item));

        return "buying";
    } else if (val == npc->getEquipmentSize() + 2) {
        return "approaching_innkeeper";
    } else {
        return "selling";
    }
}