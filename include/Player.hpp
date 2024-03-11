#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "Human.hpp"

class Player: public Human {

public:
    Player() { gold = 300; hp = 100; luck = 1; charisma = 1; being_drunk = 0; }

    ~Player() = default;

    std::uint16_t getCharisma() const;
    std::uint16_t getLuck() const;
    std::uint16_t getBeingDrunk() const;
    void updateAfterEachRound();
    void increaseBeingDrunk(std::uint16_t);

private:
    std::uint16_t charisma;
    std::uint16_t luck;
    std::uint16_t being_drunk;
};

#endif