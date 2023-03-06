#ifndef _BOW_H_
#define _BOW_H_
#include <iostream>

class Bow: public HuntingWeapon {

    public:

    virtual void show_details();
    virtual Item* clone();
    virtual std::string return_class_name();
    virtual int return_value();

    Bow(std::string name_val = "bow", int price_val = 45, int hitForce_val = 25, int amount_val = 1);
    virtual ~Bow();

    friend class GameState;

};

#endif