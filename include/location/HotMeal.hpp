#ifndef _HOTMEAL_HPP_
#define _HOTMEAL_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class HotMeal: public InteractionWithNPC {

public:
    HotMeal(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr)
        : InteractionWithNPC(player, game_state) {}
    
    ~HotMeal() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif