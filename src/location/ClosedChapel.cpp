#include "../../include/location/ClosedChapel.hpp"

ClosedChapel::ClosedChapel(std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1)
    : Location(game_state, description, choice_1) {
    related_locations.push_back("square");
} 