#ifndef _GOSSIP_HPP_
#define _GOSSIP_HPP_

#include "../Location.hpp"

class Gossip: public Location {

public:
    Gossip(const std::string& description = "You know it's rude to gossip? shame on you!",
        const std::string& choice_1 = "Ask of something else")
        : Location(description, choice_1) {}

    ~Gossip() = default;
};

#endif