#ifndef _BRIDGE_HPP_
#define _BRIDGE_HPP_

#include "../Location.hpp"

class Bridge: public Location {

public:
    Bridge(std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Now, with the thugs no longer standing in your way, you cross the bridge in peace - YOU WON!")
        : Location(game_state, description) {}

    ~Bridge() = default;

    void printLocation() override;
};

#endif