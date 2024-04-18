#include "../../include/location/ChapelAltars.hpp"
//#include "../../include/location/SunAltar.hpp"
//#include "../../include/location/LionAltar.hpp"
//#include "../../include/location/MysteriousAltar.hpp"
//#include "../../include/location/AltarOfLastResort.hpp"

ChapelAltars::ChapelAltars(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3, const std::string& choice_4, const std::string& choice_5)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {

    //game_state->addLocation("sun_altar", std::make_shared<SunAltar>(game_state->getPlayer(), game_state));
    //game_state->addLocation("lion_altar", std::make_shared<LionAltar>(game_state->getPlayer(), game_state));
    //game_state->addLocation("mysterious_altar", std::make_shared<MysteriousAltar>(game_state->getPlayer(), game_state));
    //game_state->addLocation("altar_of_last_resort", std::make_shared<AltarOfLastResort>(game_state->getPlayer(), game_state));

    related_locations.push_back("sun_altar");
    related_locations.push_back("lion_altar");
    related_locations.push_back("mysterious_altar");
    related_locations.push_back("altar_of_last_resort");
    related_locations.push_back("approaching_chapel_success");
}