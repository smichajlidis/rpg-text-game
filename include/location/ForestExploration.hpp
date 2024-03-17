#ifndef _FORESTEXPLORATION_HPP_
#define _FORESTEXPLORATION_HPP_

#include "../Location.hpp"

class ForestExploration: public Location {

public:
    ForestExploration(std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "Such a nice calm walk! Couldn't be more.. boring.",
        const std::string& choice_1 = "Continue walking",
        const std::string& choice_2 = "Enough")
        : Location(game_state, description, choice_1, choice_2) {}
    
    ~ForestExploration() = default;
};

#endif