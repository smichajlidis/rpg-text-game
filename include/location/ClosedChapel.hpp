#ifndef _CLOSEDCHAPEL_HPP_
#define _CLOSEDCHAPEL_HPP_

#include "../InteractionWithNPC.hpp"

class ClosedChapel: public InteractionWithNPC {

public:
    ClosedChapel(std::shared_ptr<Player> player, const std::string& description = "Ups, the door is closed.",
        const std::string& choice_1 = "Return")
        : InteractionWithNPC(player, description, choice_1) {} 

    ~ClosedChapel() = default;
};

#endif