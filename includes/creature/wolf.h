#ifndef _WOLF_H_
#define _WOLF_H_
#include <iostream>

class Wolf: public Creature {

public:

    Wolf(std::string name_val="wolf", int strength_val=5);
    ~Wolf();

};

#endif