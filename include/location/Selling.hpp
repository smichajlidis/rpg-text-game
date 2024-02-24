#ifndef _SELLING_HPP_
#define _SELLING_HPP_

#include "../Location.hpp"

class Selling: public Location {

public:
    Selling(const std::string& description = "What do you want to sell?",
        const std::string& choice_1 = "I want to buy something from you",
        const std::string& choice_2 = "Enough trading")
        : Location(description, choice_1, choice_2) {}

    ~Selling() = default;
};

#endif