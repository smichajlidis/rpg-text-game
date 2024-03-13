#ifndef _HOTMEAL_HPP_
#define _HOTMEAL_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class HotMeal: public InteractionWithNPC {

public:
    HotMeal(std::shared_ptr<Player> player)
        : InteractionWithNPC(player) {}
    
    ~HotMeal() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif