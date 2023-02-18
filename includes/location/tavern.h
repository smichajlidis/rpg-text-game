#ifndef _TAVERN_H_
#define _TAVERN_H_
#include <iostream>

class Tavern: public Location {

    std::string choice_1;
    std::string choice_2;
    std::string choice_3;
    std::string choice_4;

public:

    virtual void display_location();

    Tavern(std::string name_val = "tavern", std::string description_val = "You are standing inside the dark tavern.", std::string choice_1_val = "Go to the inkeeper", std::string choice_2_val = "Go to the gamblers", std::string choice_3_val = "Go to the priest", std::string choice_4_val = "Go to the ladies");
    ~Tavern();

};

#endif