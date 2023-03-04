#ifndef _PRIEST_H_
#define _PRIEST_H_
#include <iostream>

class Priest:
    public Location, public NPC, public PointPlayer {

public:

    virtual Location* making_a_choice();
    virtual void greeting();

    Priest(std::string name_val = "priest");
    ~Priest();

};

#endif