#ifndef _GOUPSTAIRS_HPP_
#define _GOUPSTAIRS_HPP_

#include "../InteractionWithNPC.hpp"

class GoUpstairs: public InteractionWithNPC {

public:
    GoUpstairs(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);

    ~GoUpstairs() = default;
    
    std::string getNextLocationName(std::uint32_t) override;
};

#endif