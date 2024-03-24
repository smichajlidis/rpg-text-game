#ifndef _FORESTFINDITEM_HPP_
#define _FORESTFINDITEM_HPP_

#include "../InteractionWithNPC.hpp"

class ForestFindItem: public InteractionWithNPC {

public:
    ForestFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Find item",
        const std::string& choice_1 = "Return");
        
    ~ForestFindItem() = default;
};

#endif