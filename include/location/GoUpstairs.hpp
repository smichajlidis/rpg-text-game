#ifndef _GOUPSTAIRS_HPP_
#define _GOUPSTAIRS_HPP_

#include "../InteractionWithNPC.hpp"

class GoUpstairs: public InteractionWithNPC {

public:
    GoUpstairs(std::shared_ptr<Player> player, const std::string& description = "You are going upstairs and... having a good time.",
        const std::string& choice_1 = "Go downstairs")
        : InteractionWithNPC(player, description, choice_1) {}

    ~GoUpstairs() = default;
};

#endif