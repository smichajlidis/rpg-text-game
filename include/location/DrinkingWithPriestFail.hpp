#ifndef _DRINKINGWITHPRIESTFAIL_HPP_
#define _DRINKINGWITHPRIESTFAIL_HPP_

#include "../NPC.hpp"

class DrinkingWithPriestFail: public NPC {

public:
    DrinkingWithPriestFail(std::shared_ptr<Player> player, const std::string& description = "Oh, you don't have money? You raised my hopes and dashed them quite expertly, sir. Bravo!",
        const std::string& choice_1 = "Return")
        : NPC(player, description, choice_1) {}

    ~DrinkingWithPriestFail() = default;
};

#endif