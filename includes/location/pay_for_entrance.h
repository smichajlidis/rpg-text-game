#ifndef _PAYFORENTRANCE_H_
#define _PAYFORENTRANCE_H_

class PayForEntrance: public Location {

public:

    virtual Location* making_a_choice();

    PayForEntrance(std::string name_val = "pay_for_entrance");
    ~PayForEntrance();

};

#endif