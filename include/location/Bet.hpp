#ifndef _BET_HPP_
#define _BET_HPP_

#include "../NPC.hpp"

class Player;

class Bet: public NPC {

public:
    Bet(std::shared_ptr<Player> player)
        : NPC(player) {}
    
    ~Bet() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif