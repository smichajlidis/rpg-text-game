#ifndef _TAVERN_H_
#define _TAVERN_H_

#include "../location.h"

class Tavern: public Location {

public:


    Tavern(std::string name_val = "tavern", std::string description_val = "You are standing inside the dark tavern.", std::string choice_1_val = "Go to the inkeeper", std::string choice_2_val = "Go to the gamblers", std::string choice_3_val = "Go to the priest", std::string choice_4_val = "Go to the ladies", std::string choice_5_val = "Go out");
    ~Tavern();

};

#endif