#ifndef _GOUPSTAIRS_HPP_
#define _GOUPSTAIRS_HPP_

#include "../NPC.hpp"

class GoUpstairs: public NPC {

public:
    GoUpstairs(std::shared_ptr<Player> player, const std::string& description = "You are going upstairs and... having a good time.",
        const std::string& choice_1 = "Go downstairs")
        : NPC(player, description, choice_1) {}

    ~GoUpstairs() = default;
};

#endif