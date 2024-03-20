#ifndef _ORDERBEERSUCCESS_HPP_
#define _ORDERBEERSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class OrderBeerSuccess: public InteractionWithNPC {

public:
    OrderBeerSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "- You are drinking a beer and have fun.",
        const std::string& choice_1 = "Drink another one",
        const std::string& choice_2 = "Ask of something else",
        const std::string& choice_3 = "Say goodbye");
    
    ~OrderBeerSuccess() = default;
};

#endif