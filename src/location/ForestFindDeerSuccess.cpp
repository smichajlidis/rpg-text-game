#include "../../include/location/ForestFindDeerSuccess.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

ForestFindDeerSuccess::ForestFindDeerSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    related_locations.push_back("hunting_success");
    related_locations.push_back("hunting_fail");
    related_locations.push_back("forest_exploration");
    related_locations.push_back("forest");
}

std::string ForestFindDeerSuccess::getNextLocationName(std::uint32_t val) {
        if (val == 1) {
            srand(time(NULL));
            bool temp = rand() % 2;
            return (temp ? "hunting_success" : "hunting_fail");
        }
        return related_locations.at(val);
}