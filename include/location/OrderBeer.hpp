#ifndef _ORDERBEER_HPP_
#define _ORDERBEER_HPP_

#include "../LocationChooser.hpp"

class Player;

class OrderBeer: public LocationChooser {

public:
    OrderBeer(std::shared_ptr<Player> player)
        : LocationChooser(player) {}
    
    ~OrderBeer() = default;

    std::shared_ptr<Location> checkingCondition(std::uint32_t) override;
};

#endif