#ifndef _HUMAN_HPP_
#define _HUMAN_HPP_

#include "LivingBeing.hpp"

class Human: public LivingBeing {

public:
    Human() = default;

    ~Human() = default;

    virtual std::uint32_t getGold() const;

protected:
    std::uint32_t gold;
};

#endif