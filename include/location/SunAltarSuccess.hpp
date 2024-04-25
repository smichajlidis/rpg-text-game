#ifndef _SUNALTARSUCCESS_HPP_
#define _SUNALTARSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class SunAltarSuccess: public InteractionWithNPC {

public:
    SunAltarSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = ".",
        const std::string& choice_1 = "Keep praying (100 gold)",
        const std::string& choice_2 = "Return");

    ~SunAltarSuccess() = default;
};

#endif