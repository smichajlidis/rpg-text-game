#ifndef _BET_HPP_
#define _BET_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class Bet: public InteractionWithNPC {

public:
    Bet(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~Bet() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif