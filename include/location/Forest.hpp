#ifndef _FOREST_HPP_
#define _FOREST_HPP_

#include "../Location.hpp"

class Forest: public Location {

public:
    Forest(std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "Walking between trees.",
        const std::string& choice_1 = "Forest exploration",
        const std::string& choice_2 = "Go to thugs",
        const std::string& choice_3 = "Go back");
    
    ~Forest() = default;
};

#endif