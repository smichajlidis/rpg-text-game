#include "../../include/location/ApproachingGamblers.hpp"
#include "../../include/location/Bet.hpp"

ApproachingGamblers::ApproachingGamblers(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3, const std::string& choice_4, const std::string& choice_5)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {

    std::shared_ptr<NPC> gamblers = std::make_shared<NPC>();
    game_state->addNPC("gamblers", gamblers);
    npc = game_state->getNPC("gamblers");

    game_state->addLocation("bet", std::make_shared<Bet>(game_state->getPlayer(), game_state));

    related_locations.push_back("bet");
    related_locations.push_back("bet");
    related_locations.push_back("bet");
    related_locations.push_back("bet");
    related_locations.push_back("tavern");
}