#include "../../include/location/Selling.hpp"

#include <iostream>
#include <algorithm>

Selling::Selling(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : NPCTrade(player, game_state, description, choice_1, choice_2) {

    npc = game_state->getNPC("innkeeper");

    related_locations.push_back("buying");
    related_locations.push_back("approaching_innkeeper");
}

void Selling::printLocation() {
    std::cout << descriptions.at(0) << "\n\n";
    player->printEquipment();
    std::cout << std::endl;
    std::cout << player->getEquipmentSize() + 1 << ". " << descriptions.at(1) << std::endl;
    std::cout << player->getEquipmentSize() + 2 << ". " << descriptions.at(2) << std::endl;
    std::cout << "\nWhat do you want? ";
}

bool Selling::inputValidation(std::uint32_t) const {
    return ((player->getEquipmentSize() + 2) ? true : false);
}

std::string Selling::getNextLocationName(std::uint32_t val) {
    if (val <= player->getEquipmentSize()) {

        Item item = player->getItemFromEquipment(val-1);
        player->deleteItem(item.getName());
        player->increaseGold(item.getValue());
        item.setAmountAsOne();
        npc->addItem(std::move(item));

        return "selling";
    } else if (val == player->getEquipmentSize() + 2) {
        return "approaching_innkeeper";
    } else {
        return "buying";
    }
}