#ifndef _SUNALTAR_HPP_
#define _SUNALTAR_HPP_

#include "../InteractionWithNPC.hpp"

class SunAltar: public InteractionWithNPC {

public:
    SunAltar(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~SunAltar() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif