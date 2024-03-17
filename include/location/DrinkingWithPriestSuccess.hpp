#ifndef _DRINKINGWITHPRIESTSUCCESS_HPP_
#define _DRINKINGWITHPRIESTSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class DrinkingWithPriestSuccess: public InteractionWithNPC {

public:
    DrinkingWithPriestSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "Ach, thank you, you are a good man - Gods bless you!",
        const std::string& choice_1 = "Order another one",
        const std::string& choice_2 = "Ask for a chapel",
        const std::string& choice_3 = "Say goodbye")
        : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {}

    ~DrinkingWithPriestSuccess() = default;
};

#endif