#ifndef _CLOSEDCHAPEL_HPP_
#define _CLOSEDCHAPEL_HPP_

#include "../Location.hpp"

class ClosedChapel: public Location {

public:
    ClosedChapel(std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Ups, the door is closed.",
        const std::string& choice_1 = "Return");

    ~ClosedChapel() = default;
};

#endif