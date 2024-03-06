#ifndef _NPCTrade_HPP_
#define _NPCTrade_HPP_

#include "NPC.hpp"

class NPCTrade: public NPC {

public:
    NPCTrade(const std::string& description = "", const std::string& choice_1 = "", const std::string& choice_2 = "", const std::string& choice_3 = "", const std::string&choice_4 = "", const std::string& choice_5 = "")
        : NPC(description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~NPCTrade() = default;

    bool inputValidation(std::uint32_t) const override;
};

#endif