#include "../../include/location/HotMealSuccess.hpp"

HotMealSuccess::HotMealSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    npc = game_state->getNPC("innkeeper");

    related_locations.push_back("hot_meal");
    related_locations.push_back("approaching_innkeeper");
}