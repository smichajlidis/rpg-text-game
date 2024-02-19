#ifndef _CHARISMATRIAL_H_
#define _CHARISMATRIAL_H_

#include "../Location.hpp"
#include "../creature/npc.h"

class CharismaTrial: public Location, public NPC {

    int* i_ptr;

public:

    virtual void greeting();
    virtual Creature* clone();
    void change_i();
    void get_i_ptr(int* i);

    CharismaTrial();
    ~CharismaTrial();

};

#endif