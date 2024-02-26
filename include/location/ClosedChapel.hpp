#ifndef _CLOSEDCHAPEL_HPP_
#define _CLOSEDCHAPEL_HPP_

#include "../Location.hpp"

class ClosedChapel: public Location {

public:
    ClosedChapel(const std::string& description = "Ups, the door is closed.",
        const std::string& choice_1 = "Return")
        : Location(description, choice_1) {} 

    ~ClosedChapel() = default;
};

#endif