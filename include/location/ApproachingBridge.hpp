#ifndef _APPROACHINGBRIDGE_HPP_
#define _APPROACHINGBRIDGE_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class ApproachingBridge: public InteractionWithNPC {

public:
    ApproachingBridge(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~ApproachingBridge() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif