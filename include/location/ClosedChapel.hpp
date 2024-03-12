#ifndef _CLOSEDCHAPEL_HPP_
#define _CLOSEDCHAPEL_HPP_

#include "../NPC.hpp"

class ClosedChapel: public NPC {

public:
    ClosedChapel(std::shared_ptr<Player> player, const std::string& description = "Ups, the door is closed.",
        const std::string& choice_1 = "Return")
        : NPC(player, description, choice_1) {} 

    ~ClosedChapel() = default;
};

#endif