#include "../../include/location/HotMeal.hpp"
#include "../../include/location/HotMealSuccess.hpp"

HotMeal::HotMeal(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("innkeeper");

    game_state->addLocation("hot_meal_success", std::make_shared<HotMealSuccess>(game_state->getPlayer(), game_state));

    related_locations.push_back("hot_meal_success");
    related_locations.push_back("not_enough_money");
}

std::string HotMeal::getNextLocationName(std::uint32_t val) {
    if (player->getGold() >= 20) {
        player->decreaseGold(20);
        player->increaseHP(20);
        return related_locations.at(0);
    }
    else {
        return related_locations.at(1);
    }
}