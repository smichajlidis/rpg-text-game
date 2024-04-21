#ifndef _LIONALTAR_HPP_
#define _LIONALTAR_HPP_

#include "../InteractionWithNPC.hpp"

class LionAltar: public InteractionWithNPC {

public:
    LionAltar(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~LionAltar() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif