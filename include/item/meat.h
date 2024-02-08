#ifndef _MEAT_H_
#define _MEAT_H_

#include "../item.h"

#include <iostream>

class Meat: public Item {

public:

    virtual Item* clone();
    virtual void show_details();
    virtual std::string return_class_name();
    virtual int return_value();

    Meat(std::string name_val="MEAT", int price_val = 7);
    ~Meat();

    friend class GameState;
};

#endif