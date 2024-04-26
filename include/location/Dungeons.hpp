#ifndef _DUNGEONS_HPP_
#define _DUNGEONS_HPP_

#include "../InteractionWithNPC.hpp"

class Dungeons: public InteractionWithNPC {

public:
    Dungeons(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~Dungeons() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif