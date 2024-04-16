#include "../../include/location/ApproachingChapelSuccess.hpp"
//#include "../../include/location/ChapelAltars.hpp"
//#include "../../include/location/ChapelDungeons.hpp"

ApproachingChapelSuccess::ApproachingChapelSuccess(std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3) 
    : Location(game_state, description, choice_1, choice_2, choice_3) {

    //game_state->addLocation("chapel_altars", std::make_shared<ChapelAltars>(game_state->getPlayer(), game_state));
    //game_state->addLocation("chapel_dungeons", std::make_shared<ChapelDungeons>(game_state->getPlayer(), game_state));

    related_locations.push_back("chapel_altars");
    related_locations.push_back("chapel_dungeons");
    related_locations.push_back("square");
}