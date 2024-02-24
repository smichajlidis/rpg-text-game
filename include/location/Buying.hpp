#ifndef _BUYING_HPP_
#define _BUYING_HPP_

#include "../Location.hpp"

class Buying: public Location {

public:
    Buying(const std::string& description = "That's all I have, what do you want to buy?",
        const std::string& choice_1 = "I want to sell you something now",
        const std::string& choice_2 = "Enough trading")
        : Location(description, choice_1, choice_2) {}

    ~Buying() = default;
};

#endif