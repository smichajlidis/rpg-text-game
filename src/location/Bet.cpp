#include "../../include/location/Bet.hpp"
#include "../../include/location/BetSuccess.hpp"
#include "../../include/location/BetFail.hpp"

#include <ctime>
#include <cstdlib>

Bet::Bet(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    : InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("gamblers");

    game_state->addLocation("bet_success", std::make_shared<BetSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("bet_fail", std::make_shared<BetFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("bet_success");
    related_locations.push_back("bet_fail");
}

std::string Bet::getNextLocationName(std::uint32_t val) {
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
            return related_locations.at(0);
        } else {
            player->decreaseGold(val);
            return related_locations.at(1);
        }
    }
    else {
        return related_locations.at(2);
    }
}
