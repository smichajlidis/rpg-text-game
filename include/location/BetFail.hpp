#ifndef _BETFAIL_HPP_
#define _BETFAIL_HPP_

#include "../Location.hpp"

class BetFail: public Location {

public:
    BetFail(const std::string& description = "Oh, you loose! Maybe you'll be lucky next time?",
        const std::string& choice_1 = "Try your luck again",
        const std::string& choice_2 = "Say goodbye")
        : Location(description, choice_1, choice_2) {}
    
    ~BetFail() = default;
};

#endif