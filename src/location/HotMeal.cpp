#include "../../include/location/HotMeal.hpp"

std::shared_ptr<Location> HotMeal::checkingCondition(std::uint32_t val) {
    if (player->getGold() >= 20) {
        player->decreaseGold(20);
        player->increaseHP(20);
        return locations.at(1);
    }
    else {
        return locations.at(2);
    }
}