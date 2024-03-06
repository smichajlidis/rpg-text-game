#ifndef _BUYING_HPP_
#define _BUYING_HPP_

#include "../NPCTrade.hpp"

class Buying: public NPCTrade {

public:
    Buying(const std::string& description = "This is all I have:",
        const std::string& choice_1 = "Return")
        : NPCTrade(description, choice_1) {}

    ~Buying() = default;

    void printLocation() override;
};

#endif