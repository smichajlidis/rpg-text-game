#include "../../include/location/Flirting.hpp"
#include "../../include/location/FlirtingSuccess.hpp"
#include "../../include/location/FlirtingFail.hpp"

#include <ctime>
#include <cstdlib>

Flirting::Flirting(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    : InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("ladies");

    game_state->addLocation("flirting_success", std::make_shared<FlirtingSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("flirting_fail", std::make_shared<FlirtingFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("flirting_success");
    related_locations.push_back("flirting_fail");
}

std::string Flirting::getNextLocationName(std::uint32_t val) {

    std::srand(std::time(0));

    std::uint32_t max_score = 100;
    std::uint32_t randomValue = rand() % 100 + 1;

    if (randomValue >= max_score - player->getLuck() - player->getCharisma()) {
        npc->increaseAttitudeToPlayer(5);
        player->increaseCharisma(1);
        return related_locations.at(0);
    } else {
        npc->decreaseAttitudeToPlayer(10);
        return related_locations.at(1);
    }
}
