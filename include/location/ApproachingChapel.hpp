#ifndef _APPROACHINGCHAPEL_HPP_
#define _APPROACHINGCHAPEL_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class ApproachingChapel: public InteractionWithNPC {

public:
    ApproachingChapel(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~ApproachingChapel() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif