#ifndef _NPCTrade_HPP_
#define _NPCTrade_HPP_

#include "NPC.hpp"

class Player;

class NPCTrade: public NPC {

public:
    NPCTrade(std::shared_ptr<Player> player, const std::string& description = "", const std::string& choice_1 = "", const std::string& choice_2 = "", const std::string& choice_3 = "", const std::string&choice_4 = "", const std::string& choice_5 = "")
        : NPC(player, description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~NPCTrade() = default;

    bool inputValidation(std::uint32_t) const override;
    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;

};

#endif