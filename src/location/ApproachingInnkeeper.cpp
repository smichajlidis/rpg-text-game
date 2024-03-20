#include "../../include/location/ApproachingInnkeeper.hpp"
#include "../../include/location/OrderBeer.hpp"
#include "../../include/location/Trade.hpp"
#include "../../include/location/Gossip.hpp"
#include "../../include/location/HotMeal.hpp"

ApproachingInnkeeper::ApproachingInnkeeper(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3, const std::string& choice_4, const std::string& choice_5)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {

    std::shared_ptr<NPC> innkeeper = std::make_shared<NPC>();
    game_state->addNPC("innkeeper", innkeeper);
    npc = game_state->getNPC("innkeeper");

    game_state->addLocation("order_beer", std::make_shared<OrderBeer>(game_state->getPlayer(), game_state));
    game_state->addLocation("trade", std::make_shared<Trade>(game_state->getPlayer(), game_state));
    game_state->addLocation("gossip", std::make_shared<Gossip>(game_state->getPlayer(), game_state));
    game_state->addLocation("hot_meal", std::make_shared<HotMeal>(game_state->getPlayer(), game_state));

    related_locations.push_back("order_beer");
    related_locations.push_back("trade");
    related_locations.push_back("gossip");
    related_locations.push_back("hot_meal");
    related_locations.push_back("tavern");
}