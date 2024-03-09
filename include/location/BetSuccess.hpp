#ifndef _BETSUCCESS_HPP_
#define _BETSUCCESS_HPP_

#include "../Location.hpp"

class BetSuccess: public Location {

public:
    BetSuccess(const std::string& description = "Lucky you, you won twice as much as you bet!",
        const std::string& choice_1 = "Bet one more time",
        const std::string& choice_2 = "Say goodbye")
        : Location(description, choice_1, choice_2) {}
    
    ~BetSuccess() = default;
};

#endif