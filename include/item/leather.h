#ifndef _LEATHER_H_
#define _LEATHER_H_

#include "../item.h"

#include <iostream>

class Leather: public Item {

public:

    virtual Item* clone();
    virtual void show_details();
    virtual std::string return_class_name();
    virtual int return_value();

    Leather(std::string name_val="LEATHER", int price_val = 15);
    ~Leather();

    friend class GameState;
};

#endif