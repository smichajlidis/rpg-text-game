#ifndef _APPROACHINGPRIEST_HPP_
#define _APPROACHINGPRIEST_HPP_

#include "../LocationChooser.hpp"

class Player;

class ApproachingPriest: public LocationChooser {

public:
    ApproachingPriest(std::shared_ptr<Player> player)
        : LocationChooser(player) {}
    
    ~ApproachingPriest() = default;

    std::shared_ptr<Location> checkingCondition(std::uint32_t) override;
};

#endif