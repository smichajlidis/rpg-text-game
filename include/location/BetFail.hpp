#ifndef _BETFAIL_HPP_
#define _BETFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class BetFail: public InteractionWithNPC {

public:
    BetFail(std::shared_ptr<Player> player, const std::string& description = "Oh, you loose! Maybe you'll be lucky next time?",
        const std::string& choice_1 = "Try your luck again",
        const std::string& choice_2 = "Say goodbye")
        : InteractionWithNPC(player, description, choice_1, choice_2) {}
    
    ~BetFail() = default;
};

#endif