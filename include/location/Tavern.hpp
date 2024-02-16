#ifndef _TAVERN_HPP_
#define _TAVERN_HPP_

#include "../location.h"

class Tavern: public Location {

public:
    Tavern(const std::string& name = "tavern",
    const std::string& description = "You are standing inside the dark tavern.",
    const std::string& choice_1 = "Go to the inkeeper",
    const std::string& choice_2 = "Go to the gamblers",
    const std::string& choice_3 = "Go to the priest",
    const std::string& choice_4 = "Go to the ladies",
    const std::string& choice_5 = "Go out")
    : Location(name, description, choice_1, choice_2, choice_3, choice_4, choice_5) {}
    
    ~Tavern() = default;

};

#endif