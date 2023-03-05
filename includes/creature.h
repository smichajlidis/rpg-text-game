#ifndef _CREATURE_H_
#define _CREATURE_H_
#include <iostream>
//#include "equipment.h"

class Equipment;
class Item;

class Creature {

    std::string name;
    Equipment equipment;
    int strength;
    Item* active_weapon;
    int hp;

public:

    void increase_hp(int hp_val);
    void restore_hp();

    Creature(std::string name_val = "none", int strength_val = 1, Item* active_weapon_val=nullptr, int hp_val = 100);
    ~Creature();

    friend class Player;
    friend class NPC;
    friend class OrderBeer;
    friend class HotDish;
    friend class Priest;
    friend class Ladies;
    friend class Gamblers;
    friend class GameState;

};

#endif