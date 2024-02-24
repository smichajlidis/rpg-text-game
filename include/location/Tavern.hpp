#ifndef _TAVERN_HPP_
#define _TAVERN_HPP_

#include "../Location.hpp"

class Tavern: public Location {

public:
    Tavern(const std::string& description = "You are standing inside a dark tavern.",
    const std::string& choice_1 = "Go to the counter and talk to the innkeeper",
    const std::string& choice_2 = "Sit at the table with the gamblers",
    const std::string& choice_3 = "Approach the priest sitting alone",
    const std::string& choice_4 = "Go to ladies looking at you flirtatiously",
    const std::string& choice_5 = "Go out")
    : Location(description, choice_1, choice_2, choice_3, choice_4, choice_5) {}
    
    ~Tavern() = default;

};

#endif