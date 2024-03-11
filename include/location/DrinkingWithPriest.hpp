#ifndef _DRINKINGWITHPRIEST_HPP_
#define _DRINKINGWITHPRIEST_HPP_

#include "../LocationChooser.hpp"

class Player;

class DrinkingWithPriest: public LocationChooser {

public:
    DrinkingWithPriest(std::shared_ptr<Player> player)
        : LocationChooser(player) {}
    
    ~DrinkingWithPriest() = default;

    std::shared_ptr<Location> checkingCondition(std::uint32_t) override;
};

#endif