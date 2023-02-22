#ifndef _SWORD_H_
#define _SWORD_H_
#include <iostream>

class Sword: public Weapon {

    Sword(std::string name_val = "sword", int price_val = 70, int hitForce_val = 35, int amount_val = 1);
    ~Sword();

    friend class GameState;

};

#endif