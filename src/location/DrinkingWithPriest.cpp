#include "../../include/location/DrinkingWithPriest.hpp"

std::shared_ptr<Location> DrinkingWithPriest::checkingCondition(std::uint32_t val) {
    if (player->getGold() >= 20) {
        player->decreaseGold(20);
        return locations.at(1);
    }
    else {
        return locations.at(2);
    }
}