#ifndef _THUGSPAYINGFAIL_HPP_
#define _THUGSPAYINGFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class ThugsPayingFail: public InteractionWithNPC {

public:
    ThugsPayingFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Do you think this is funny?! Come back with enough money!",
        const std::string& choice_1 = "Return");
        
    ~ThugsPayingFail() = default;
};

#endif