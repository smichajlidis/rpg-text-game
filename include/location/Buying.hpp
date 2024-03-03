#ifndef _BUYING_HPP_
#define _BUYING_HPP_

#include "../NPC.hpp"

class Buying: public NPC {

public:
    Buying(const std::string& description = "Innkeepers contents",
        const std::string& choice_1 = "I want to sell you something now",
        const std::string& choice_2 = "Return")
        : NPC(description, choice_1, choice_2) {}

    ~Buying() = default;

    void printLocation() override;
};

#endif