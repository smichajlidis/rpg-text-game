#ifndef _HUMAN_HPP_
#define _HUMAN_HPP_

#include "LivingBeing.hpp"

class Human: public LivingBeing {

public:
    Human() = default;

    ~Human() = default;

    std::uint32_t getGold() const;
    void decreaseGold(std::uint32_t);
    void increaseGold(std::uint32_t);

protected:
    std::uint32_t gold;
};

#endif