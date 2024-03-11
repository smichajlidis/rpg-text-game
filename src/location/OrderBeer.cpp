#include "../../include/location/OrderBeer.hpp"

std::shared_ptr<Location> OrderBeer::checkingCondition(std::uint32_t val) {
    if (player->getGold() >= 10) {
        player->increaseBeingDrunk(10);
        player->decreaseGold(10);
        return locations.at(1);
    }
    else {
        return locations.at(2);
    }
}