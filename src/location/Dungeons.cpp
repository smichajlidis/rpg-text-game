#include "../../include/location/Dungeons.hpp"
#include "../../include/location/DungeonsMeetEnemy.hpp"
#include "../../include/location/DungeonsFindItem.hpp"
#include "../../include/location/DungeonsNothingHappened.hpp"

#include <ctime>

Dungeons::Dungeons(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    : InteractionWithNPC(player, game_state) {

    game_state->addLocation("dungeons_find_item", std::make_shared<DungeonsFindItem>(game_state->getPlayer(), game_state));
    game_state->addLocation("dungeons_meet_enemy", std::make_shared<DungeonsMeetEnemy>(game_state->getPlayer(), game_state));
    game_state->addLocation("dungeons_nothing_happened", std::make_shared<DungeonsNothingHappened>(game_state->getPlayer(), game_state));

    related_locations.push_back("dungeons_find_item");
    related_locations.push_back("dungeons_meet_enemy");
    related_locations.push_back("dungeons_nothing_happened");
}

std::string Dungeons::getNextLocationName(std::uint32_t val) {
    srand(time(NULL));
    return related_locations.at(std::rand() % related_locations.size());
}
