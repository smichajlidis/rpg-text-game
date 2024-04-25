#ifndef _MYSTERIOUSALTARSUCCESS_HPP_
#define _MYSTERIOUSALTARSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class MysteriousAltarSuccess: public InteractionWithNPC {

public:
    MysteriousAltarSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = ".",
        const std::string& choice_1 = "Keep praying (100 gold)",
        const std::string& choice_2 = "Return");

    ~MysteriousAltarSuccess() = default;
};

#endif