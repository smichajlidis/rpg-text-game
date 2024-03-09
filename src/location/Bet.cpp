#include "../../include/location/Bet.hpp"

#include <ctime>
#include <cstdlib>

std::shared_ptr<Location> Bet::checkingCondition(std::uint32_t val) {
    switch (val) {
        case 1: val = 10; break;
        case 2: val = 20; break;
        case 3: val = 50; break;
        case 4: val = 100; break;
        default: break;
    }

    if (val <= player->getGold()) {
        std::srand(std::time(0));

        std::uint32_t max_score = 100;
        std::uint32_t randomValue = rand() % 100 + 1;

        if (randomValue >= max_score - player->getLuck()) {
            player->increaseGold(val);
            return locations.at(1);
        } else {
            player->decreaseGold(val);
            return locations.at(2);
        }
    }
    else {
        return locations.at(3);
    }
}
