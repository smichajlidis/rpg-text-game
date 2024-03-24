#ifndef _FORESTFINDDEER_HPP_
#define _FORESTFINDDEER_HPP_

#include "../InteractionWithNPC.hpp"

class ForestFindDeer: public InteractionWithNPC {

public:
    ForestFindDeer(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Forest find deer",
        const std::string& choice_1 = "Return");
        
    ~ForestFindDeer() = default;
};

#endif