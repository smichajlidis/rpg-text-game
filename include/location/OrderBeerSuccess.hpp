#ifndef _ORDERBEERSUCCESS_HPP_
#define _ORDERBEERSUCCESS_HPP_

#include "../Location.hpp"

class OrderBeerSuccess: public Location {

public:
    OrderBeerSuccess(const std::string& description = "You are drinking a beer and have fun.",
        const std::string& choice_1 = "Drink another one",
        const std::string& choice_2 = "Ask of something else",
        const std::string& choice_3 = "Say goodbye")
        : Location(description, choice_1, choice_2, choice_3) {}
    
    ~OrderBeerSuccess() = default;
};

#endif