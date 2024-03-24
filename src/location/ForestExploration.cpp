#include "../../include/location/ForestExploration.hpp"
#include "../../include/location/ForestMeetEnemy.hpp"
#include "../../include/location/ForestFindDeer.hpp"
#include "../../include/location/ForestFindItem.hpp"
#include "../../include/location/ForestNothingHappened.hpp"

#include <ctime>

ForestExploration::ForestExploration(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    : InteractionWithNPC(player, game_state) {

    game_state->addLocation("forest_find_item", std::make_shared<ForestFindItem>(game_state->getPlayer(), game_state));
    game_state->addLocation("forest_meet_enemy", std::make_shared<ForestMeetEnemy>(game_state->getPlayer(), game_state));
    game_state->addLocation("forest_find_deer", std::make_shared<ForestFindDeer>(game_state->getPlayer(), game_state));
    game_state->addLocation("forest_nothing_happened", std::make_shared<ForestNothingHappened>(game_state->getPlayer(), game_state));

    related_locations.push_back("forest_find_item");
    related_locations.push_back("forest_meet_enemy");
    related_locations.push_back("forest_find_deer");
    related_locations.push_back("forest_nothing_happened");
}

std::string ForestExploration::getNextLocationName(std::uint32_t val) {
    
    srand(time(NULL));
    switch(std::rand() % 4 + 1) {
        case 1: return related_locations.at(0); break;
        case 2: return related_locations.at(1); break;
        case 3: return related_locations.at(2); break;
        default: return related_locations.at(3); break;
    }
}