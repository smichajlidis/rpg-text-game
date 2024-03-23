#ifndef _FLIRTINGFAIL_HPP_
#define _FLIRTINGFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class FlirtingFail: public InteractionWithNPC {

public:
    FlirtingFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "- Give it up, it's not gonna happen.",
        const std::string& choice_1 = "Try your luck again",
        const std::string& choice_2 = "Say goodbye");
    
    ~FlirtingFail() = default;
};

#endif