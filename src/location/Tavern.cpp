#include "../../include/location/Tavern.hpp"
#include "../../include/location/ApproachingInnkeeper.hpp"
#include "../../include/location/ApproachingGamblers.hpp"
#include "../../include/location/ApproachingPriest.hpp"
#include "../../include/location/ApproachingLadies.hpp"

Tavern::Tavern(std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3, const std::string& choice_4, const std::string& choice_5)
    : Location(game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {

    game_state->addLocation("approaching_innkeeper", std::make_shared<ApproachingInnkeeper>(game_state->getPlayer(), game_state));
    game_state->addLocation("approaching_gamblers", std::make_shared<ApproachingGamblers>(game_state->getPlayer(), game_state));
    game_state->addLocation("approaching_priest", std::make_shared<ApproachingPriest>(game_state->getPlayer(), game_state));
    game_state->addLocation("approaching_ladies", std::make_shared<ApproachingLadies>(game_state->getPlayer(), game_state));

    related_locations.push_back("approaching_innkeeper");
    related_locations.push_back("approaching_gamblers");
    related_locations.push_back("approaching_priest");
    related_locations.push_back("approaching_ladies");
    related_locations.push_back("square");

}