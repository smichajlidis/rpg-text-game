#ifndef _SQUARE_H_
#define _SQUARE_H_
#include <iostream>

class Square: public Location {

public:

    virtual Location* making_a_choice();

    Square(std::string name_val = "square", std::string description_val = "You are standing on a square. You see a tavern on the right. On the left - a chapel. Behind you is an entrance to forest.", std::string choice_1_val = "Go to the tavern", std::string choice_2_val = "Go to forest", std::string choice_3_val = "Go to the chapel");
    ~Square();

};

#endif