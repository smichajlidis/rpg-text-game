#include "../../include/location/OrderBeer.hpp"

std::shared_ptr<Location> OrderBeer::moveToLocation(std::uint32_t val) {
    if (player->getGold() > 10) {
        return locations.at(1);
    }
    else {
        return locations.at(2);
    }
}