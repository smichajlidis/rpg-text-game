#include "../../include/location/FlirtingSuccess.hpp"

FlirtingSuccess::FlirtingSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    npc = game_state->getNPC("ladies");

    related_locations.push_back("flirting");
    related_locations.push_back("go_upstairs");
    related_locations.push_back("tavern");
}