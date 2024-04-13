#include "../../include/location/ThugsPaying.hpp"
#include "../../include/location/ThugsPayingSuccess.hpp"
#include "../../include/location/ThugsPayingFail.hpp"

ThugsPaying::ThugsPaying(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("thugs");

    game_state->addLocation("thugs_paying_success", std::make_shared<ThugsPayingSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("thugs_paying_fail", std::make_shared<ThugsPayingFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("thugs_paying_success");
    related_locations.push_back("thugs_paying_fail");
}

std::string ThugsPaying::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 10000) {
        player->decreaseGold(10000);
        player->setWin();
        return related_locations.at(0);
    }
    npc->decreaseAttitudeToPlayer(20);
    return related_locations.at(1);
}