#ifndef _PRIEST_HPP_
#define _PRIEST_HPP_

#include "../NPC.hpp"

class Priest: public NPC {

public:
    Priest(const std::string& description = " - said priest.",
        const std::string& choice_1 = "Order two beers for you",
        const std::string& choice_2 = "Ask for a chapel",
        const std::string& choice_3 = "Return");

    ~Priest() = default;
};

#endif