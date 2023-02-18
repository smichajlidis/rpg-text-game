#ifndef _SQUARE_H_
#define _SQUARE_H_
#include <iostream>

class Square: public Location {

    std::string choice_1;
    std::string choice_2;
    std::string choice_3;

public:

    Square(std::string name_val = "square", std::string description_val = "You are standing on a square. You see a tavern on the right. On the left - a chapel. Behind you is an entrance to forest.", std::string choice_1_val = "Go to the tavern", std::string choice_2_val = "Go to the chapel", std::string choice_3_val = "Go to forest");
    ~Square();

};

#endif