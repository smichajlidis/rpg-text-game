#ifndef _DRINKINGWITHPRIEST_HPP_
#define _DRINKINGWITHPRIEST_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class DrinkingWithPriest: public InteractionWithNPC {

public:
    DrinkingWithPriest(std::shared_ptr<Player> player)
        : InteractionWithNPC(player) {}
    
    ~DrinkingWithPriest() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif