#ifndef _CHARISMATRIAL_H_
#define _CHARISMATRIAL_H_

#include "../location.h"
#include "../creature/npc.h"

class CharismaTrial: public Location, public NPC {

    int* i_ptr;

public:

    virtual Location* making_a_choice();
    virtual void greeting();
    virtual Creature* clone();
    void change_i();
    void get_i_ptr(int* i);

    CharismaTrial(std::string name_val = "THUGS");
    ~CharismaTrial();

};

#endif