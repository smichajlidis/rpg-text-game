#include "../../include/location/ForestFindItem.hpp"

ForestFindItem::ForestFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1)
    : InteractionWithNPC(player, game_state, description, choice_1) {
    related_locations.push_back("forest");
}
        