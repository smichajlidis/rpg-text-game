#ifndef _ATTACKTHUGS_HPP_
#define _ATTACKTHUGS_HPP_

#include "../InteractionWithNPC.hpp"

class AttackThugs: public InteractionWithNPC {

public:
    AttackThugs(std::shared_ptr<Player> player, const std::string& description = "Attaaaaaaack!",
        const std::string& choice_1 = "Fight more!",
        const std::string& choice_2 = "Run away")
        : InteractionWithNPC(player, description, choice_1, choice_2) {}

    ~AttackThugs() = default;
};

#endif