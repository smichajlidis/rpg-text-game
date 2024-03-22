#include "../../include/location/DrinkingWithPriest.hpp"
#include "../../include/location/DrinkingWithPriestSuccess.hpp"
#include "../../include/location/DrinkingWithPriestFail.hpp"

DrinkingWithPriest::DrinkingWithPriest(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("priest");

    game_state->addLocation("drinking_with_priest_success", std::make_shared<DrinkingWithPriestSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("drinking_with_priest_fail", std::make_shared<DrinkingWithPriestFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("drinking_with_priest_success");
    related_locations.push_back("drinking_with_priest_fail");
}

std::string DrinkingWithPriest::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 20) {
        player->increaseBeingDrunk(10);
        player->decreaseGold(20);
        npc->increaseAttitudeToPlayer(10);
        return related_locations.at(0);
    }
    else {
        npc->decreaseAttitudeToPlayer(20);
        return related_locations.at(1);
    }
}