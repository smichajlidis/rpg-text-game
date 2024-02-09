#ifndef _PAYFORENTRANCE_H_
#define _PAYFORENTRANCE_H_

#include "../location.h"

class PayForEntrance: public Location {

    int* i_ptr;

public:

    virtual Location* making_a_choice();
    void change_i();
    void get_i_ptr(int* i);

    PayForEntrance(std::string name_val = "pay_for_entrance");
    ~PayForEntrance();

};

#endif