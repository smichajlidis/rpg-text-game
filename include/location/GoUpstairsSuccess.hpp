#ifndef _GOUPSTAIRSSUCCESS_HPP_
#define _GOUPSTAIRSSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class GoUpstairsSuccess: public InteractionWithNPC {

public:
    GoUpstairsSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "You are going upstairs and... having a good time.",
        const std::string& choice_1 = "Go downstairs");
        
    ~GoUpstairsSuccess() = default;
};

#endif