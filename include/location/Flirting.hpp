#ifndef _FLIRTING_HPP_
#define _FLIRTING_HPP_

#include "../Location.hpp"

class Flirting: public Location {

public:
    Flirting(const std::string& description = "Oh, you are so sweet Darling! Tell us more!",
        const std::string& choice_1 = "Still flirting",
        const std::string& choice_2 = "Go upstairs",
        const std::string& choice_3 = "Say goodbye")
        : Location(description, choice_1, choice_2, choice_3) {}

    ~Flirting() = default;
};

#endif