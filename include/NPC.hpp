#ifndef _NPC_HPP_
#define _NPC_HPP_

#include "LivingBeing.hpp"

#include <vector>

class NPC: public LivingBeing {

public:
    NPC(std::uint32_t strength = 10, std::string name = "npc")
        : LivingBeing(strength, name) { gold = 300; attitude_to_player = 40; }

    ~NPC() = default;

    void increaseAttitudeToPlayer(std::uint16_t);
    void decreaseAttitudeToPlayer(std::uint16_t);
    std::uint16_t getAttitudeToPlayer() const;
    std::string getFightingSentence() const;
    void addFightingSentence(const std::string&);

private:
    std::uint16_t attitude_to_player;
    std::vector<std::string> fighting_sentences;
};

#endif