#ifndef _HOTMEAL_HPP_
#define _HOTMEAL_HPP_

#include "../NPC.hpp"

class Player;

class HotMeal: public NPC {

public:
    HotMeal(std::shared_ptr<Player> player)
        : NPC(player) {}
    
    ~HotMeal() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif