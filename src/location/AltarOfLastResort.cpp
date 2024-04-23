#include "../../include/location/AltarOfLastResort.hpp"
#include "../../include/location/AltarOfLastResortSuccess.hpp"
#include "../../include/location/NoMoneyForPray.hpp"

AltarOfLastResort::AltarOfLastResort(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    game_state->addLocation("altar_of_last_resort_success", std::make_shared<AltarOfLastResortSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("no_money_for_pray", std::make_shared<NoMoneyForPray>(game_state));

    related_locations.push_back("altar_of_last_resort_success");
    related_locations.push_back("no_money_for_pray");
}

std::string AltarOfLastResort::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 1000) {
        player->decreaseGold(1000);
        // place for getting a new item
        return related_locations.at(0);
    }
    else {
        return related_locations.at(1);
    }
}