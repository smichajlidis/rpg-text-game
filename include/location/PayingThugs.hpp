#ifndef _PAYINGTHUGS_HPP_
#define _PAYINGTHUGS_HPP_

#include "../Location.hpp"

class PayingThugs: public Location {

public:
    PayingThugs(const std::string& description = "Come back when you'll have enough money.",
        const std::string& choice_1 = "Try something else",
        const std::string& choice_2 = "Say goodbye")
        : Location(description, choice_1, choice_2) {}

    ~PayingThugs() = default;
};

#endif