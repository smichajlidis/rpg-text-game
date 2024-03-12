#ifndef _HOTMEALSUCCESS_HPP_
#define _HOTMEALSUCCESS_HPP_

#include "../NPC.hpp"

class HotMealSuccess: public NPC {

public:
    HotMealSuccess(std::shared_ptr<Player> player, const std::string& description = "There's nothing like a hot meal!",
        const std::string& choice_1 = "Order another one",
        const std::string& choice_2 = "Return")
        : NPC(player, description, choice_1, choice_2) {}

    ~HotMealSuccess() = default;
};

#endif