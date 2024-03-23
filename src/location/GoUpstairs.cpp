#include "../../include/location/GoUpstairs.hpp"
#include "../../include/location/GoUpstairsSuccess.hpp"
#include "../../include/location/GoUpstairsFail.hpp"

GoUpstairs::GoUpstairs(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("ladies");

    game_state->addLocation("go_upstairs_success", std::make_shared<GoUpstairsSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("go_upstairs_fail", std::make_shared<GoUpstairsFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("go_upstairs_success");
    related_locations.push_back("go_upstairs_fail");
}

std::string GoUpstairs::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 100) {
        player->increaseHP(100);
        player->increaseLuck(5);
        player->decreaseGold(100);
        return related_locations.at(0);
    }
    else {
        return related_locations.at(1);
    }
}