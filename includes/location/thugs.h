#ifndef _THUGS_H_
#define _THUGS_H_
#include <iostream>

class Thugs: public Location {

public:

    virtual Location* making_a_choice();

    Thugs(std::string name_val = "thugs", std::string description_val = "Hello stranger, do you want to cross the bridge? No problem.. if you pay 1000 piece of gold. Deal?", std::string choice_1_val = "Pay", std::string choice_2_val = "Try to convince them", std::string choice_3_val = "Attack them");
    ~Thugs();

};

#endif