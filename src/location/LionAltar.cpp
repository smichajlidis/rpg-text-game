#include "../../include/location/LionAltar.hpp"
#include "../../include/location/LionAltarSuccess.hpp"

LionAltar::LionAltar(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    game_state->addLocation("lion_altar_success", std::make_shared<LionAltarSuccess>(game_state->getPlayer(), game_state));

    related_locations.push_back("lion_altar_success");
    related_locations.push_back("no_money_for_pray");
}

std::string LionAltar::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 100) {
        player->decreaseGold(100);
        player->increaseCharisma(5);
        return related_locations.at(0);
    }
    else {
        return related_locations.at(1);
    }
}