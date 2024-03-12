#ifndef _ORDERBEER_HPP_
#define _ORDERBEER_HPP_

#include "../NPC.hpp"

class Player;

class OrderBeer: public NPC {

public:
    OrderBeer(std::shared_ptr<Player> player)
        : NPC(player) {}
    
    ~OrderBeer() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif