#ifndef _CHARISMATRIAL_H_
#define _CHARISMATRIAL_H_

class CharismaTrial: public Location, public NPC {

public:

    virtual Location* making_a_choice();
    virtual void greeting();
    virtual Creature* clone();

    CharismaTrial(std::string name_val = "THUGS");
    ~CharismaTrial();

};

#endif