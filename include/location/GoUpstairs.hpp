#ifndef _GOUPSTAIRS_HPP_
#define _GOUPSTAIRS_HPP_

#include "../Location.hpp"

class GoUpstairs: public Location {

public:
    GoUpstairs(const std::string& description = "You are going upstairs and... having a good time.",
        const std::string& choice_1 = "Go downstairs")
        : Location(description, choice_1) {}

    ~GoUpstairs() = default;
};

#endif