#include "../include/NPC.hpp"

void NPC::increaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player + val <= 100) ? attitude_to_player + val : 100);
}

void NPC::decreaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player - val >= 0) ? attitude_to_player - val : 0);
}

std::uint16_t NPC::getAttitudeToPlayer() const {
    return attitude_to_player;
}

Item NPC::moveItem(const std::string& val) {
    for(auto& item: this->equipment) {
        if (item.getName() == val) {
            Item temp = item;
            this->deleteItem(val);
            return temp;
        }
    }
    return {};
}