#ifndef _CONVINCETHUGS_HPP_
#define _CONVINCETHUGS_HPP_

#include "../NPC.hpp"

class ConvinceThugs: public NPC {

public:
    ConvinceThugs(std::shared_ptr<Player> player, const std::string& description = "Stay away from me you freak!",
        const std::string& choice_1 = "Try again",
        const std::string& choice_2 = "Try something else",
        const std::string& choice_3 = "Say goodbye")
        : NPC(player, description, choice_1, choice_2, choice_3) {}

    ~ConvinceThugs() = default;
};

#endif