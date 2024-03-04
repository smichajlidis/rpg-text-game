#ifndef _BUYING_HPP_
#define _BUYING_HPP_

#include "../NPC.hpp"

class Buying: public NPC {

public:
    Buying(const std::string& description = "This is all I have:",
        const std::string& choice_1 = "Return")
        : NPC(description, choice_1) {}

    ~Buying() = default;

    void printLocation() override;
};

#endif