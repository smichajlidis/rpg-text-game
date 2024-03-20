#ifndef _ORDERBEER_HPP_
#define _ORDERBEER_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class OrderBeer: public InteractionWithNPC {

public:
    OrderBeer(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~OrderBeer() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif