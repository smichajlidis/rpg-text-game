#ifndef _BETFAIL_HPP_
#define _BETFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class BetFail: public InteractionWithNPC {

public:
    BetFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Oh, you loose! Maybe you'll be lucky next time?",
        const std::string& choice_1 = "Try your luck again",
        const std::string& choice_2 = "Say goodbye");
    
    ~BetFail() = default;
};

#endif