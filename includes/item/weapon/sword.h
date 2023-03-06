#ifndef _SWORD_H_
#define _SWORD_H_
#include <iostream>

class Sword: public Weapon {

    public:

    virtual void show_details();
    virtual Item* clone();
    virtual std::string return_class_name();
    virtual int return_value();

    Sword(std::string name_val = "sword", int price_val = 70, int hitForce_val = 35, int amount_val = 1);
    virtual ~Sword();

    friend class GameState;

};

#endif