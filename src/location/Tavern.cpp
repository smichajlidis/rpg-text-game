#include "../../include/location/Tavern.hpp"
#include "../../include/location/Innkeeper.hpp"
#include "../../include/location/Gamblers.hpp"
#include "../../include/location/ApproachingPriest.hpp"
#include "../../include/location/Ladies.hpp"

Tavern::Tavern(std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3, const std::string& choice_4, const std::string& choice_5)
    : Location(game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {

    game_state->addLocation("innkeeper", std::make_shared<Innkeeper>(game_state->getPlayer(), game_state));
    game_state->addLocation("gamblers", std::make_shared<Gamblers>(game_state->getPlayer(), game_state));
    game_state->addLocation("approaching_priest", std::make_shared<ApproachingPriest>(game_state->getPlayer(), game_state));
    game_state->addLocation("ladies", std::make_shared<Ladies>(game_state->getPlayer(), game_state));

    related_locations.push_back("innkeeper");
    related_locations.push_back("gamblers");
    related_locations.push_back("approaching_priest");
    related_locations.push_back("ladies");
    related_locations.push_back("square");

}