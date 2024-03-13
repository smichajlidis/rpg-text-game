#ifndef _FLIRTING_HPP_
#define _FLIRTING_HPP_

#include "../InteractionWithNPC.hpp"

class Flirting: public InteractionWithNPC {

public:
    Flirting(std::shared_ptr<Player> player, const std::string& description = "Oh, you are so sweet Darling! Tell us more!",
        const std::string& choice_1 = "Still flirting",
        const std::string& choice_2 = "Go upstairs",
        const std::string& choice_3 = "Say goodbye")
        : InteractionWithNPC(player, description, choice_1, choice_2, choice_3) {}

    ~Flirting() = default;
};

#endif