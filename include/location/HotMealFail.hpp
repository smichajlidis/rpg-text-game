#ifndef _HOTMEALFAIL_HPP_
#define _HOTMEALFAIL_HPP_

#include "../Location.hpp"

class HotMealFail: public Location {

public:
    HotMealFail(const std::string& description = "Sorry, you don't have enough money.",
        const std::string& choice_1 = "Return")
        : Location(description, choice_1) {}

    ~HotMealFail() = default;
};

#endif