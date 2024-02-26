#ifndef _ATTACKTHUGS_HPP_
#define _ATTACKTHUGS_HPP_

#include "../Location.hpp"

class AttackThugs: public Location {

public:
    AttackThugs(const std::string& description = "Attaaaaaaack!",
        const std::string& choice_1 = "Fight more!",
        const std::string& choice_2 = "Run away")
        : Location(description, choice_1, choice_2) {}

    ~AttackThugs() = default;
};

#endif