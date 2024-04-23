#ifndef _ALTAROFLASTRESORTSUCCESS_HPP_
#define _ALTAROFLASTRESORTSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class AltarOfLastResortSuccess: public InteractionWithNPC {

public:
    AltarOfLastResortSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "description of altar of last resort",
        const std::string& choice_1 = "Keep praying (1000 gold)",
        const std::string& choice_2 = "Return");

    ~AltarOfLastResortSuccess() = default;
};

#endif