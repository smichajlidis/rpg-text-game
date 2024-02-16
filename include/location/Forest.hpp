#ifndef _FOREST_HPP_
#define _FOREST_HPP_

#include "../location.h"

class Forest: public Location {

public:
    Forest(const std::string& name = "forest",
    const std::string& description = "Walking between trees.",
    const std::string& choice_1 = "Forest exploration",
    const std::string& choice_2 = "Go to thugs",
    const std::string& choice_3 = "Go back")
    : Location(name, description, choice_1, choice_2, choice_3) {}
    
    ~Forest() = default;

};

#endif