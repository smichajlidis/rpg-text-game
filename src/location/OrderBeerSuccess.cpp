#include "../../include/location/OrderBeerSuccess.hpp"
#include "../../include/location/OrderBeer.hpp"
#include "../../include/location/Trade.hpp"
#include "../../include/location/Gossip.hpp"
#include "../../include/location/HotMeal.hpp"

OrderBeerSuccess::OrderBeerSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    npc = game_state->getNPC("innkeeper");

    related_locations.push_back("order_beer");
    related_locations.push_back("approaching_innkeeper");
    related_locations.push_back("tavern");
}