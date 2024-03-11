#include "../../include/location/ApproachingPriest.hpp"

std::shared_ptr<Location> ApproachingPriest::checkingCondition(std::uint32_t val) {
    return (player->getBeingDrunk() ? locations.at(1) : locations.at(2));
}