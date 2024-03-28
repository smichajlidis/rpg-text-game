#include "../../include/location/ForestFindDeer.hpp"

ForestFindDeer::ForestFindDeer(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1)
    : InteractionWithNPC(player, game_state, description, choice_1) {}
        