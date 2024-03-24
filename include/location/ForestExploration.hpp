#ifndef _FORESTEXPLORATION_HPP_
#define _FORESTEXPLORATION_HPP_

#include "../InteractionWithNPC.hpp"

class ForestExploration: public InteractionWithNPC {

public:
    ForestExploration(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~ForestExploration() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif