#ifndef _APPROACHINGPRIEST_HPP_
#define _APPROACHINGPRIEST_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class ApproachingPriest: public InteractionWithNPC {

public:
    ApproachingPriest(std::shared_ptr<Player> player = nullptr, std::shared_ptr<GameState> game_state = nullptr);
    
    ~ApproachingPriest() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif