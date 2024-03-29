#ifndef _NPC_HPP_
#define _NPC_HPP_

#include "LivingBeing.hpp"

class NPC: public LivingBeing {

public:
    NPC() { gold = 300; attitude_to_player = 40; }

    ~NPC() = default;

    void increaseAttitudeToPlayer(std::uint16_t);
    void decreaseAttitudeToPlayer(std::uint16_t);
    std::uint16_t getAttitudeToPlayer() const;

private:
    std::uint16_t attitude_to_player;
};

#endif