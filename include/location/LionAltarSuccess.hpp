#ifndef _LIONALTARSUCCESS_HPP_
#define _LIONALTARSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class LionAltarSuccess: public InteractionWithNPC {

public:
    LionAltarSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = ".",
        const std::string& choice_1 = "Keep praying (100 gold)",
        const std::string& choice_2 = "Return");

    ~LionAltarSuccess() = default;
};

#endif