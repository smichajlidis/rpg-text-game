#include "../../include/location/AskingAboutChapel.hpp"

std::shared_ptr<Location> AskingAboutChapel::moveToLocation(std::uint32_t val) {
        if (npc->getAttitudeToPlayer() >= 80) {
            return locations.at(1);
        } else {
            npc->decreaseAttitudeToPlayer(20);
            return locations.at(2);
        }
}
