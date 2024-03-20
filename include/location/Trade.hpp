#ifndef _TRADE_HPP_
#define _TRADE_HPP_

#include "../InteractionWithNPC.hpp"

class Trade: public InteractionWithNPC {

public:
    Trade(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Would you like to buy or sell something?",
        const std::string& choice_1 = "Buy",
        const std::string& choice_2 = "Sell",
        const std::string& choice_3 = "Return");
    
    ~Trade() = default;
};

#endif