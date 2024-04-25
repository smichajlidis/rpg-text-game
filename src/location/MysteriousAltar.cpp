#include "../../include/location/MysteriousAltar.hpp"
#include "../../include/location/MysteriousAltarSuccess.hpp"

MysteriousAltar::MysteriousAltar(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    game_state->addLocation("mysterious_altar_success", std::make_shared<MysteriousAltarSuccess>(game_state->getPlayer(), game_state));

    related_locations.push_back("mysterious_altar_success");
    related_locations.push_back("no_money_for_pray");
}

std::string MysteriousAltar::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 100) {
        player->decreaseGold(100);
        player->increaseLuck(5);
        return related_locations.at(0);
    }
    else {
        return related_locations.at(1);
    }
}