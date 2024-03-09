#ifndef _NOTENOUGHMONEY_HPP_
#define _NOTENOUGHMONEY_HPP_

#include "../Location.hpp"

class NotEnoughMoney: public Location {

public:
    NotEnoughMoney(const std::string& description = "Sorry, you don't have enough money.",
        const std::string& choice_1 = "Return")
        : Location(description, choice_1) {}

    ~NotEnoughMoney() = default;
};

#endif