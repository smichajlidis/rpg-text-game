#ifndef _NPC_HPP_
#define _NPC_HPP_

#include "Human.hpp"

class NPC: public Human {

public:
    NPC() { gold = 300; attitude_to_player = 40; }

    ~NPC() = default;

    void increaseAttitudeToPlayer(std::uint16_t);
    void decreaseAttitudeToPlayer(std::uint16_t);

private:
    std::uint16_t attitude_to_player;
};

#endif