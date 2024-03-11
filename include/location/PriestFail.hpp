#ifndef _PRIESTFAIL_HPP_
#define _PRIESTFAIL_HPP_

#include "../Location.hpp"

class PriestFail: public Location {

public:
    PriestFail(const std::string& description = "Live me alone stranger!",
        const std::string& choice_1 = "Return")
        : Location(description, choice_1) {}

    ~PriestFail() = default;
};

#endif