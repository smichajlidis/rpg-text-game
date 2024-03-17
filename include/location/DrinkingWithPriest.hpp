#ifndef _DRINKINGWITHPRIEST_HPP_
#define _DRINKINGWITHPRIEST_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class DrinkingWithPriest: public InteractionWithNPC {

public:
    DrinkingWithPriest(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr)
        : InteractionWithNPC(player, game_state) {}
    
    ~DrinkingWithPriest() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif