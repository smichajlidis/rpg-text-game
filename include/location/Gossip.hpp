#ifndef _GOSSIP_HPP_
#define _GOSSIP_HPP_

#include "../NPC.hpp"

class Gossip: public NPC {

public:
    Gossip(std::shared_ptr<Player> player, const std::string& description = "You know it's rude to gossip? shame on you!",
        const std::string& choice_1 = "Ask of something else")
        : NPC(player, description, choice_1) {}

    ~Gossip() = default;
};

#endif