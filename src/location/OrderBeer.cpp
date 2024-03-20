#include "../../include/location/OrderBeer.hpp"
#include "../../include/location/OrderBeerSuccess.hpp"
#include "../../include/location/NotEnoughMoney.hpp"

OrderBeer::OrderBeer(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("innkeeper");

    game_state->addLocation("order_beer_success", std::make_shared<OrderBeerSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("not_enough_money", std::make_shared<NotEnoughMoney>(game_state));

    related_locations.push_back("order_beer_success");
    related_locations.push_back("not_enough_money");
}

std::string OrderBeer::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 10) {
        player->increaseBeingDrunk(10);
        player->decreaseGold(10);
        return related_locations.at(0);
    }
    else {
        return related_locations.at(1);
    }
}