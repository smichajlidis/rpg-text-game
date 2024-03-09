#ifndef _BET_HPP_
#define _BET_HPP_

#include "../LocationChooser.hpp"

class Player;

class Bet: public LocationChooser {

public:
    Bet(std::shared_ptr<Player> player)
        : LocationChooser(player) {}
    
    ~Bet() = default;

    std::shared_ptr<Location> checkingCondition(std::uint32_t) override;
};

#endif