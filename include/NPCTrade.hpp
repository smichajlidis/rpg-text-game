#ifndef _NPCTrade_HPP_
#define _NPCTrade_HPP_

#include "InteractionWithNPC.hpp"

class Player;

class NPCTrade: public InteractionWithNPC {

public:
    NPCTrade(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "", const std::string& choice_1 = "", const std::string& choice_2 = "", const std::string& choice_3 = "", const std::string&choice_4 = "", const std::string& choice_5 = "")
        : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~NPCTrade() = default;

    bool inputValidation(std::uint32_t) const override;
    std::string getNextLocationName(std::uint32_t) override;
};

#endif