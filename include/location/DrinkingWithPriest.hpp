#ifndef _DRINKINGWITHPRIEST_HPP_
#define _DRINKINGWITHPRIEST_HPP_

#include "../InteractionWithNPC.hpp"

class DrinkingWithPriest: public InteractionWithNPC {

public:
    DrinkingWithPriest(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~DrinkingWithPriest() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif