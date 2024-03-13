#include "../../include/location/DrinkingWithPriest.hpp"

std::shared_ptr<Location> DrinkingWithPriest::moveToLocation(std::uint32_t val) {
    if (player->getGold() >= 20) {
        player->increaseBeingDrunk(10);
        player->decreaseGold(20);
        //this->increaseAttitudeToPlayer(10);
        return locations.at(1);
    }
    else {
        //this->decreaseAttitudeToPlayer(20);
        return locations.at(2);
    }
}