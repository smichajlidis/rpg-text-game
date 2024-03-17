#ifndef _DUNGEONS_HPP_
#define _DUNGEONS_HPP_

#include "../Location.hpp"

class Dungeons: public Location {

public:
    Dungeons(std::shared_ptr<GameState> game_state = nullptr)
        : Location(game_state) {}
    
    ~Dungeons() = default;
};

#endif
