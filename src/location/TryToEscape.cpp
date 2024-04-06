#include "../../include/location/TryToEscape.hpp"
#include "../../include/location/TryToEscapeSuccess.hpp"
#include "../../include/location/TryToEscapeFail.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

TryToEscape::TryToEscape(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    game_state->addLocation("try_to_escape_success", std::make_shared<TryToEscapeSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("try_to_escape_fail", std::make_shared<TryToEscapeFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("try_to_escape_success");
    related_locations.push_back("try_to_escape_fail");
}

std::string TryToEscape::getNextLocationName(std::uint32_t val) {
    srand(time(NULL));

    std::uint32_t max_score = 50;
    std::uint32_t randomValue = rand() % 100 + 1;

    if (randomValue >= max_score - player->getLuck()) {
        return related_locations.at(0);
    } else {
        player->decreaseHP(rand() % player->getCurrentEnemyStrength());
        return related_locations.at(1);
    }
}