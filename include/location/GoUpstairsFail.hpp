#ifndef _GOUPSTAIRSFAIL_HPP_
#define _GOUPSTAIRSFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class GoUpstairsFail: public InteractionWithNPC {

public:
    GoUpstairsFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "- Oh, honey, we are not so easy.. and cheap. Please get some money and come back to us.",
        const std::string& choice_1 = "Return");
        
    ~GoUpstairsFail() = default;
};

#endif