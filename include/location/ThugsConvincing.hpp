#ifndef _THUGSCONVINCING_HPP_
#define _THUGSCONVINCING_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class ThugsConvincing: public InteractionWithNPC {

public:
    ThugsConvincing(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~ThugsConvincing() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif