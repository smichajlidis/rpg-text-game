#ifndef _LOCATION_H_
#define _LOCATION_H_
#include <iostream>
#include <vector>

class Location {

    std::string name;
    std::string description;
    std::string choice_1;
    std::string choice_2;
    std::string choice_3;
    std::string choice_4;
    std::string choice_5;

    std::vector <Location*> related_locations;

public:

    void print_location();
    virtual Location* making_a_choice()=0;
    

    Location(std::string name_val = "nowhere", std::string description_val = "description", std::string choice_1_val = "none", std::string choice_2_val = "none", std::string choice_3_val = "none", std::string choice_4_val = "none", std::string choice_5_val = "none");
    ~Location();
    
    friend class GameState;
    friend class Square;
    friend class Chapel;
    friend class Forest;
    friend class Tavern;
    friend class Innkeeper;
    friend class Gamblers;
    friend class Priest;
    friend class Ladies;
    friend class Thugs;
    friend class Altars;

};

#endif