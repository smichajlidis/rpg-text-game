#include "../../include/location/PriestFail.hpp"

PriestFail::PriestFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1)
    : InteractionWithNPC(player, game_state, description, choice_1) {

    npc = game_state->getNPC("priest");
    related_locations.push_back("tavern");
}