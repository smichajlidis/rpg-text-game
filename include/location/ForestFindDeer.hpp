#ifndef _FORESTFINDDEER_HPP_
#define _FORESTFINDDEER_HPP_

#include "../InteractionWithNPC.hpp"

class ForestFindDeer: public InteractionWithNPC {

public:
    ForestFindDeer(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
        
    ~ForestFindDeer() = default;

    std::string getNextLocationName(std::uint32_t val) override;
};

#endif