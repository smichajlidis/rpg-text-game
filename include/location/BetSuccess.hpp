#ifndef _BETSUCCESS_HPP_
#define _BETSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class BetSuccess: public InteractionWithNPC {

public:
    BetSuccess(std::shared_ptr<Player> player, const std::string& description = "Lucky you, you won twice as much as you bet!",
        const std::string& choice_1 = "Bet one more time",
        const std::string& choice_2 = "Say goodbye")
        : InteractionWithNPC(player, description, choice_1, choice_2) {}
    
    ~BetSuccess() = default;
};

#endif