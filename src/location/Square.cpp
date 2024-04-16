#include "../../include/location/Square.hpp"
#include "../../include/location/Tavern.hpp"
#include "../../include/location/Forest.hpp"
#include "../../include/location/ApproachingChapel.hpp"

Square::Square(std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : Location(game_state, description, choice_1, choice_2, choice_3) {

    game_state->addLocation("tavern", std::make_shared<Tavern>(game_state));
    game_state->addLocation("forest", std::make_shared<Forest>(game_state));
    game_state->addLocation("approaching_chapel", std::make_shared<ApproachingChapel>(game_state->getPlayer(), game_state));

    related_locations.push_back("tavern");
    related_locations.push_back("forest");
    related_locations.push_back("approaching_chapel");
}