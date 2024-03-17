#ifndef _APPROACHINGPRIEST_HPP_
#define _APPROACHINGPRIEST_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class ApproachingPriest: public InteractionWithNPC {

public:
    ApproachingPriest(std::shared_ptr<Player> player = nullptr, std::shared_ptr<GameState> game_state = nullptr)
        : InteractionWithNPC(player, game_state) {}
    
    ~ApproachingPriest() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif