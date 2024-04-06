#include "../../include/location/TryToEscapeSuccess.hpp"

TryToEscapeSuccess::TryToEscapeSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    related_locations.push_back("forest_exploration");
    related_locations.push_back("forest");
}