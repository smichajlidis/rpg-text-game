#ifndef _LADIES_HPP_
#define _LADIES_HPP_

#include "../NPC.hpp"

class Ladies: public NPC {

public:
    Ladies(const std::string& description = "",
        const std::string& choice_1 = "Go upstairs",
        const std::string& choice_2 = "Just flirt with them",
        const std::string& choice_3 = "Return");

    ~Ladies() = default;
};

#endif