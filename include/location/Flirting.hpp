#ifndef _FLIRTING_HPP_
#define _FLIRTING_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class Flirting: public InteractionWithNPC {

public:
    Flirting(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~Flirting() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif