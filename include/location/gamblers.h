#ifndef _GAMBLERS_H_
#define _GAMBLERS_H_

#include "../location.h"
#include "../point_player.h"

class PointPlayer;

class Gamblers: 
    public Location, public PointPlayer {

public:


    Gamblers(std::string name_val = "gamblers", std::string description_val = "How much do you want to bet?", std::string choice_1_val = "5", std::string choice_2_val = "10", std::string choice_3_val = "20", std::string choice_4_val = "50", std::string choice_5_val = "100");
    ~Gamblers();

};

#endif