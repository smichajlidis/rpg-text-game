#ifndef _DRINKINGWITHPRIEST_HPP_
#define _DRINKINGWITHPRIEST_HPP_

#include "../NPC.hpp"

class Player;

class DrinkingWithPriest: public NPC {

public:
    DrinkingWithPriest(std::shared_ptr<Player> player)
        : NPC(player) {}
    
    ~DrinkingWithPriest() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif