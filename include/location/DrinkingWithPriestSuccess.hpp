#ifndef _DRINKINGWITHPRIESTSUCCESS_HPP_
#define _DRINKINGWITHPRIESTSUCCESS_HPP_

#include "../Location.hpp"

class DrinkingWithPriestSuccess: public Location {

public:
    DrinkingWithPriestSuccess(const std::string& description = "Ach, thank you, you are a good man - Gods bless you!",
        const std::string& choice_1 = "Order another one",
        const std::string& choice_2 = "Ask for a chapel",
        const std::string& choice_3 = "Say goodbye")
        : Location(description, choice_1, choice_2, choice_3) {}

    ~DrinkingWithPriestSuccess() = default;
};

#endif