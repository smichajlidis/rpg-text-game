#include "../../include/location/BetFail.hpp"

BetFail::BetFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    npc = game_state->getNPC("gamblers");

    related_locations.push_back("approaching_gamblers");
    related_locations.push_back("tavern");
}