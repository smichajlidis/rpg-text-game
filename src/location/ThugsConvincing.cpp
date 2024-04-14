#include "../../include/location/ThugsConvincing.hpp"
#include "../../include/location/ThugsConvincingSuccess.hpp"
#include "../../include/location/ThugsConvincingFail.hpp"

#include <ctime>
#include <cstdlib>

ThugsConvincing::ThugsConvincing(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    : InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("thugs");

    game_state->addLocation("thugs_convincing_success", std::make_shared<ThugsConvincingSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("thugs_convincing_fail", std::make_shared<ThugsConvincingFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("thugs_convincing_success");
    related_locations.push_back("thugs_convincing_fail");
}

std::string ThugsConvincing::getNextLocationName(std::uint32_t val) {

    std::srand(std::time(0));

    std::uint32_t max_score = 100;
    std::uint32_t randomValue = rand() % 100 + 1;

    if (randomValue >= max_score - player->getLuck() - player->getCharisma()) {
        npc->increaseAttitudeToPlayer(5);
        player->increaseCharisma(1);
        return related_locations.at(0);
    } else {
        npc->decreaseAttitudeToPlayer(20);
        return related_locations.at(1);
    }
}
