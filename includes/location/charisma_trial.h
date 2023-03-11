#ifndef _CHARISMATRIAL_H_
#define _CHARISMATRIAL_H_

class CharismaTrial: public Location {

public:

    virtual Location* making_a_choice();

    CharismaTrial(std::string name_val = "charisma_trial");
    ~CharismaTrial();

};

#endif