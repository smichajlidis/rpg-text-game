#ifndef _ORDERBEER_HPP_
#define _ORDERBEER_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class OrderBeer: public InteractionWithNPC {

public:
    OrderBeer(std::shared_ptr<Player> player)
        : InteractionWithNPC(player) {}
    
    ~OrderBeer() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif