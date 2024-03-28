#include "../../include/location/Forest.hpp"
#include "../../include/location/ForestExploration.hpp"
#include "../../include/location/ApproachingThugs.hpp"

Forest::Forest(std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3) 
    : Location(game_state, description, choice_1, choice_2, choice_3) {

    game_state->addLocation("forest_exploration", std::make_shared<ForestExploration>(game_state->getPlayer(), game_state));
    game_state->addLocation("approaching_thugs", std::make_shared<ApproachingThugs>(game_state->getPlayer(), game_state));

    related_locations.push_back("forest_exploration");
    related_locations.push_back("approaching_thugs");
    related_locations.push_back("square");
}