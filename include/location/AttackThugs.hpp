#ifndef _ATTACKTHUGS_HPP_
#define _ATTACKTHUGS_HPP_

#include "../NPC.hpp"

class AttackThugs: public NPC {

public:
    AttackThugs(std::shared_ptr<Player> player, const std::string& description = "Attaaaaaaack!",
        const std::string& choice_1 = "Fight more!",
        const std::string& choice_2 = "Run away")
        : NPC(player, description, choice_1, choice_2) {}

    ~AttackThugs() = default;
};

#endif