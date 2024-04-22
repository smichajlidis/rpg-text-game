#ifndef _MYSTERIOUSALTAR_HPP_
#define _MYSTERIOUSALTAR_HPP_

#include "../InteractionWithNPC.hpp"

class MysteriousAltar: public InteractionWithNPC {

public:
    MysteriousAltar(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~MysteriousAltar() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif