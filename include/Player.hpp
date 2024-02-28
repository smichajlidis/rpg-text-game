#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "Human.hpp"

class Player: public Human {

public:
    Player() = default;

    ~Player() = default;

    std::uint16_t getCharisma() const;
    std::uint16_t getLuck() const;

private:
    std::uint16_t charisma;
    std::uint16_t luck;
};

#endif