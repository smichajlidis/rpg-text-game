#ifndef _DRINKINGWITHPRIESTFAIL_HPP_
#define _DRINKINGWITHPRIESTFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class DrinkingWithPriestFail: public InteractionWithNPC {

public:
    DrinkingWithPriestFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Oh, you don't have money? You raised my hopes and dashed them quite expertly, sir. Bravo!",
        const std::string& choice_1 = "Return");

    ~DrinkingWithPriestFail() = default;
};

#endif