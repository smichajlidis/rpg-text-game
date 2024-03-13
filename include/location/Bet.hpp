#ifndef _BET_HPP_
#define _BET_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class Bet: public InteractionWithNPC {

public:
    Bet(std::shared_ptr<Player> player)
        : InteractionWithNPC(player) {}
    
    ~Bet() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif