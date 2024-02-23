#ifndef _ORDERBEER_HPP_
#define _ORDERBEER_HPP_

#include "../Location.hpp"

class OrderBeer: public Location {

public:
    OrderBeer(const std::string& description = "You are drinking a beer and have fun.",
        const std::string& choice_1 = "Drink another one",
        const std::string& choice_2 = "Ask of something else")
        : Location(description, choice_1, choice_2) {}
    
    ~OrderBeer() = default;
};

#endif