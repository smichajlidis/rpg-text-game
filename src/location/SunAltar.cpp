#include "../../include/location/SunAltar.hpp"
#include "../../include/location/SunAltarSuccess.hpp"
#include "../../include/location/NoMoneyForPray.hpp"

SunAltar::SunAltar(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    game_state->addLocation("sun_altar_success", std::make_shared<SunAltarSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("no_money_for_pray", std::make_shared<NoMoneyForPray>(game_state->getPlayer(), game_state));

    related_locations.push_back("sun_altar_success");
    related_locations.push_back("no_money_for_pray");
}

std::string SunAltar::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 100) {
        player->decreaseGold(100);
        player->increaseStrength(5);
        return related_locations.at(0);
    }
    else {
        return related_locations.at(1);
    }
}