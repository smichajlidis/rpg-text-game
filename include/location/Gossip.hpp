#ifndef _GOSSIP_HPP_
#define _GOSSIP_HPP_

#include "../InteractionWithNPC.hpp"

class Gossip: public InteractionWithNPC {

public:
    Gossip(std::shared_ptr<Player> player, const std::string& description = "You know it's rude to gossip? shame on you!",
        const std::string& choice_1 = "Ask of something else")
        : InteractionWithNPC(player, description, choice_1) {}

    ~Gossip() = default;
};

#endif