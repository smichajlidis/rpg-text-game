#ifndef _HUNTINGFAIL_HPP_
#define _HUNTINGFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class HuntingFail: public InteractionWithNPC {

public:
    HuntingFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "As you wander through the forest, you encounter a deer, but lacking any hunting gear, your only option is to continue your journey.",
        const std::string& choice_1 = "Continue exploring",
        const std::string& choice_2 = "Enough for today");

    ~HuntingFail() = default;

    void printLocation() override;
};

#endif