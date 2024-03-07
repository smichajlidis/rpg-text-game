#include "../include/NPCTrade.hpp"

// + 2 because there is also two related location options
bool NPCTrade::inputValidation(std::uint32_t val) const {
    return ((equipment.size() + 2) ? true : false);
}

std::shared_ptr<Location> NPCTrade::moveToLocation(std::uint32_t locationNumber) const {
    return locations.at(locationNumber - equipment.size());
}
