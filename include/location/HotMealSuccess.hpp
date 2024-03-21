#ifndef _HOTMEALSUCCESS_HPP_
#define _HOTMEALSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class HotMealSuccess: public InteractionWithNPC {

public:
    HotMealSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "There's nothing like a hot meal!",
        const std::string& choice_1 = "Order another one",
        const std::string& choice_2 = "Return");

    ~HotMealSuccess() = default;
};

#endif