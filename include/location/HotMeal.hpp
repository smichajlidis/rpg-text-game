#ifndef _HOTMEAL_HPP_
#define _HOTMEAL_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class HotMeal: public InteractionWithNPC {

public:
    HotMeal(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~HotMeal() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif