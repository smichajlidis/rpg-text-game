#ifndef _PRIESTFAIL_HPP_
#define _PRIESTFAIL_HPP_

#include "../NPC.hpp"

class PriestFail: public NPC {

public:
    PriestFail(const std::string& description = "- Live me alone stranger!",
        const std::string& choice_1 = "Return")
        : NPC(description, choice_1) {}

    ~PriestFail() = default;
};

#endif