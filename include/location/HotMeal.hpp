#ifndef _HOTMEAL_HPP_
#define _HOTMEAL_HPP_

#include "../LocationChooser.hpp"

class Player;

class HotMeal: public LocationChooser {

public:
    HotMeal(std::shared_ptr<Player> player)
        : LocationChooser(player) {}
    
    ~HotMeal() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif