#ifndef _PAYFORENTRANCE_H_
#define _PAYFORENTRANCE_H_

#include "../Location.hpp"

class PayForEntrance: public Location {

    int* i_ptr;

public:

    void change_i();
    void get_i_ptr(int* i);

    PayForEntrance();
    ~PayForEntrance();

};

#endif