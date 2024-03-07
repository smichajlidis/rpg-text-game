#ifndef _BUYING_HPP_
#define _BUYING_HPP_

#include "../NPCTrade.hpp"

class Buying: public NPCTrade {

public:
    Buying(const std::string& description = "This is all I have:",
        const std::string& choice_1 = "I want to sell you something now",
        const std::string& choice_2 = "Return")
        : NPCTrade(description, choice_1, choice_2) {}

    ~Buying() = default;

    void printLocation() override;
};

#endif