#ifndef _HOTMEAL_HPP_
#define _HOTMEAL_HPP_

#include "../Location.hpp"

class HotMeal: public Location {

public:
    HotMeal(const std::string& description = "There's nothing like a hot meal!",
        const std::string& choice_1 = "Order another one",
        const std::string& choice_2 = "Return")
        : Location(description, choice_1, choice_2) {}

    ~HotMeal() = default;
};

#endif