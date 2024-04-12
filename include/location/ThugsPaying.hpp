#ifndef _THUGSPAYING_HPP_
#define _THUGSPAYING_HPP_

#include "../InteractionWithNPC.hpp"

class ThugsPaying: public InteractionWithNPC {

public:
    ThugsPaying(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~ThugsPaying() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif