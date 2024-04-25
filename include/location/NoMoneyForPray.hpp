#ifndef _NOMONEYFORPRAY_HPP_
#define _NOMONEYFORPRAY_HPP_

#include "../InteractionWithNPC.hpp"

class NoMoneyForPray: public InteractionWithNPC {

public:
    NoMoneyForPray(std::shared_ptr<Player> player = nullptr, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = ".",
        const std::string& choice_1 = "Return");

    ~NoMoneyForPray() = default;
};

#endif