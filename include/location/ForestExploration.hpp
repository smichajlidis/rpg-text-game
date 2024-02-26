#ifndef _FORESTEXPLORATION_HPP_
#define _FORESTEXPLORATION_HPP_

#include "../Location.hpp"

class ForestExploration: public Location {

public:
    ForestExploration(const std::string& description = "Such a nice calm walk! Couldn't be more.. boring.",
        const std::string& choice_1 = "Continue walking",
        const std::string& choice_2 = "Enough")
        : Location(description, choice_1, choice_2) {}
    
    ~ForestExploration() = default;
};

#endif