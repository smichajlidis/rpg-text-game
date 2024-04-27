#include "../../include/location/Forest.hpp"
#include "../../include/location/ForestExploration.hpp"
#include "../../include/location/ApproachingBridge.hpp"

Forest::Forest(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3) 
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    game_state->addLocation("forest_exploration", std::make_shared<ForestExploration>(game_state->getPlayer(), game_state));
    game_state->addLocation("approaching_bridge", std::make_shared<ApproachingBridge>(game_state->getPlayer(), game_state));

    related_locations.push_back("forest_exploration");
    related_locations.push_back("approaching_bridge");
    related_locations.push_back("square");

    player->setWhereIsPlayer("forest");
}