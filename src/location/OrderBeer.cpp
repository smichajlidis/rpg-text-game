#include "../../include/location/OrderBeer.hpp"

void OrderBeer::printLocation() {
    if (player.getGold() > 10) {
        current_location = locations.at(0);
    }
    else {
        current_location = locations.at(1);
    }
}