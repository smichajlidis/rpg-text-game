#ifndef _HOTMEALSUCCESS_HPP_
#define _HOTMEALSUCCESS_HPP_

#include "../Location.hpp"

class HotMealSuccess: public Location {

public:
    HotMealSuccess(const std::string& description = "There's nothing like a hot meal!",
        const std::string& choice_1 = "Order another one",
        const std::string& choice_2 = "Return")
        : Location(description, choice_1, choice_2) {}

    ~HotMealSuccess() = default;
};

#endif