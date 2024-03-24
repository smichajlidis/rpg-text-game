#ifndef _FORESTMEETENEMY_HPP_
#define _FORESTMEETENEMY_HPP_

#include "../InteractionWithNPC.hpp"

class ForestMeetEnemy: public InteractionWithNPC {

public:
    ForestMeetEnemy(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Meet enemy",
        const std::string& choice_1 = "Return");
        
    ~ForestMeetEnemy() = default;
};

#endif