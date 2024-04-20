#ifndef _NOMONEYFORPRAY_HPP_
#define _NOMONEYFORPRAY_HPP_

#include "../Location.hpp"

class NoMoneyForPray: public Location {

public:
    NoMoneyForPray(std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "Sorry, you don't have enough money.",
        const std::string& choice_1 = "Return");

    ~NoMoneyForPray() = default;
};

#endif