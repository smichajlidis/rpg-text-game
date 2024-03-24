#ifndef _FORESTNOTHINGHAPPENED_HPP_
#define _FORESTNOTHINGHAPPENED_HPP_

#include "../InteractionWithNPC.hpp"

class ForestNothingHappened: public InteractionWithNPC {

public:
    ForestNothingHappened(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Nothing happened",
        const std::string& choice_1 = "Return");
        
    ~ForestNothingHappened() = default;
};

#endif