#ifndef _DRINKINGWITHPRIESTFAIL_HPP_
#define _DRINKINGWITHPRIESTFAIL_HPP_

#include "../NPC.hpp"

class DrinkingWithPriestFail: public NPC {

public:
    DrinkingWithPriestFail(const std::string& description = "Oh, you don't have money? You raised my hopes and dashed them quite expertly, sir. Bravo!",
        const std::string& choice_1 = "Return")
        : NPC(description, choice_1) {}

    ~DrinkingWithPriestFail() = default;
};

#endif