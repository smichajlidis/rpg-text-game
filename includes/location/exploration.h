#ifndef _EXPLORATION_H_
#define _EXPLORATION_H_
#include <iostream>

class Exploration: public Location {

public:

   // virtual Location* making_a_choice();

    Exploration(std::string name_val="exploration");
    ~Exploration();
};

#endif