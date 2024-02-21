#ifndef _INNKEEPER_HPP_
#define _INNKEEPER_HPP_

#include "../Location.hpp"

class Innkeeper: public Location {

public:
    Innkeeper(const std::string& description = "- Hello stranger, what do you wish?",
        const std::string& choice_1 = "Ask for a beer",
        const std::string& choice_2 = "Trade",
        const std::string& choice_3 = "Ask for a gossip",
        const std::string& choice_4 = "Order something to eat")
        : Location(description, choice_1, choice_2, choice_3, choice_4) {}

    ~Innkeeper() = default;
};

#endif