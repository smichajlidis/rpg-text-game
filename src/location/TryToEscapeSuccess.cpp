#include "../../include/location/TryToEscapeSuccess.hpp"

TryToEscapeSuccess::TryToEscapeSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

        related_locations.push_back("forest_exploration");
        related_locations.push_back("forest");
}

std::string TryToEscapeSuccess::getNextLocationName(std::uint32_t val) {
    
    switch (val) {
        case 1:
            return ((player->getWhereIsPlayer() == "forest") ? "forest_exploration" : "dungeons");
            break;
        case 2:
            return ((player->getWhereIsPlayer() == "forest") ? "forest" : "approaching_chapel_success");
            break;
        default:
            break;
    }
    return "try_to_escape_success";
}