#ifndef _CHARISMATRIAL_H_
#define _CHARISMATRIAL_H_

#include "../Location.hpp"

class CharismaTrial: public Location {

    int* i_ptr;

public:

    virtual void greeting();
    void change_i();
    void get_i_ptr(int* i);

    CharismaTrial();
    ~CharismaTrial();

};

#endif