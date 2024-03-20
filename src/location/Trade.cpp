#include "../../include/location/Trade.hpp"
#include "../../include/location/Buying.hpp"
#include "../../include/location/Selling.hpp"

Trade::Trade(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    npc = game_state->getNPC("innkeeper");

    game_state->addLocation("buying", std::make_shared<Buying>(game_state->getPlayer(), game_state));
    game_state->addLocation("selling", std::make_shared<Selling>(game_state->getPlayer(), game_state));

    related_locations.push_back("buying");
    related_locations.push_back("selling");
    related_locations.push_back("approaching_innkeeper");
}