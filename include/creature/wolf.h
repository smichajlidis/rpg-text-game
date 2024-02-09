#ifndef _WOLF_H_
#define _WOLF_H_

#include "../creature.h"

class Wolf: public Creature {


public:

    virtual Creature* clone();

    Wolf(std::string name_val="wolf", int strength_val=7);
    ~Wolf();

};

#endif