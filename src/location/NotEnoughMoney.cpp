#include "../../include/location/NotEnoughMoney.hpp"

NotEnoughMoney::NotEnoughMoney(std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1)
    : Location(game_state, description, choice_1) {

    related_locations.push_back("approaching_innkeeper");
}