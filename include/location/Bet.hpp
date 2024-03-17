#ifndef _BET_HPP_
#define _BET_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class Bet: public InteractionWithNPC {

public:
    Bet(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr)
        : InteractionWithNPC(player, game_state) {}
    
    ~Bet() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif