#ifndef _CHAPEL_HPP_
#define _CHAPEL_HPP_

#include "../Location.hpp"

class Chapel: public Location {

public:
    Chapel(std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "You are inside old, dark chapel. A bit scary place but for some reason you are in.",
    const std::string& choice_1 = "Make a sacrifice and pray",
    const std::string& choice_2 = "Explore dungeons",
    const std::string& choice_3 = "Leave the chapel")
    : Location(game_state, description, choice_1, choice_2, choice_3) {}
    
    ~Chapel() = default;

};

#endif