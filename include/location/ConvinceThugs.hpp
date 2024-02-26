#ifndef _CONVINCETHUGS_HPP_
#define _CONVINCETHUGS_HPP_

#include "../Location.hpp"

class ConvinceThugs: public Location {

public:
    ConvinceThugs(const std::string& description = "Stay away from me you freak!",
        const std::string& choice_1 = "Try again",
        const std::string& choice_2 = "Try something else",
        const std::string& choice_3 = "Say goodbye")
        : Location(description, choice_1, choice_2, choice_3) {}

    ~ConvinceThugs() = default;
};

#endif