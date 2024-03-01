#ifndef _ORDERBEERFAIL_HPP_
#define _ORDERBEERFAIL_HPP_

#include "../Location.hpp"

class OrderBeerFail: public Location {

public:
    OrderBeerFail(const std::string& description = "Sorry, you don't have enough money.",
        const std::string& choice_1 = "Ask of something else")
        : Location(description, choice_1) {}
    
    ~OrderBeerFail() = default;
};

#endif