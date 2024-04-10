#include "../../include/location/ForestFindDeer.hpp"
#include "../../include/location/ForestFindDeerSuccess.hpp"
#include "../../include/location/ForestFindDeerFail.hpp"

ForestFindDeer::ForestFindDeer(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    : InteractionWithNPC(player, game_state) {

    game_state->addLocation("forest_find_deer_success", std::make_shared<ForestFindDeerSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("forest_find_deer_fail", std::make_shared<ForestFindDeerFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("forest_find_deer_success");
    related_locations.push_back("forest_find_deer_fail");
}

std::string ForestFindDeer::getNextLocationName(std::uint32_t val) {
    return ((player->findItemInEquipment("bow")) ? related_locations.at(0) : related_locations.at(0));
}