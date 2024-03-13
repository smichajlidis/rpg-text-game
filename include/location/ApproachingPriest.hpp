#ifndef _APPROACHINGPRIEST_HPP_
#define _APPROACHINGPRIEST_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class ApproachingPriest: public InteractionWithNPC {

public:
    ApproachingPriest(std::shared_ptr<Player> player)
        : InteractionWithNPC(player) {}
    
    ~ApproachingPriest() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif