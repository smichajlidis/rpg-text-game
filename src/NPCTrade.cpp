#include "../include/NPCTrade.hpp"

// + 2 because there is also two related location options
bool NPCTrade::inputValidation(std::uint32_t val) const {
    return ((equipment.size() + 2) ? true : false);
}

std::string NPCTrade::getNextLocationName(std::uint32_t val) {
    return related_locations.at(val - 1 - npc->getEquipmentSize());
}
