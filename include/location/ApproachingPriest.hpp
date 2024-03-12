#ifndef _APPROACHINGPRIEST_HPP_
#define _APPROACHINGPRIEST_HPP_

#include "../NPC.hpp"

class Player;

class ApproachingPriest: public NPC {

public:
    ApproachingPriest(std::shared_ptr<Player> player)
        : NPC(player) {}
    
    ~ApproachingPriest() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif