#ifndef _YOUAREDEAD_HPP_
#define _YOUAREDEAD_HPP_

#include "../Location.hpp"

class YouAreDead: public Location {

public:
    YouAreDead(std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "You are dead - GAME OVER")
        : Location(game_state, description) {}

    ~YouAreDead() = default;

    void printLocation() override;
};

#endif