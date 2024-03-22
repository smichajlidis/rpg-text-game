#include "../../include/location/DrinkingWithPriestSuccess.hpp"

DrinkingWithPriestSuccess::DrinkingWithPriestSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    npc = game_state->getNPC("priest");

    related_locations.push_back("drinking_with_priest");
    related_locations.push_back("asking_about_chapel");
    related_locations.push_back("tavern");
}