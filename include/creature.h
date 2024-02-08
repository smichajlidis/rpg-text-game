#ifndef _CREATURE_H_
#define _CREATURE_H_
#include <iostream>

#include "equipment.h"
#include "item.h"

class Creature {

    std::string name;
    Equipment equipment;
    int strength;
    Item* active_weapon;
    int hp;

public:

    void increase_hp(int hp_val);
    void restore_hp();
    std::string return_name();
    int return_hitForce();
    void display_enemy();
    void decrease_hp(int hit);
    int return_hp();
    bool have_a_bow();
    void give_a_weapon(Item* weapon);
    int return_gold();
    void remove_gold(int val);
    void increase_strength(int val);
    void decrease_strength(int val);
    int return_strength();
    void increase_gold(int val);

    virtual Creature* clone()=0;

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
    friend class Location;
    friend class ForestAttack;
    friend class Hunting;
    friend class DungeonsAttack;
    friend class FoundFood;
    friend class FoundTreasures;
    friend class Selling;
    friend class Buying;
    friend class PayForEntrance;
    friend class ChapelsDoor;
  //  friend class StrengthAltar;
  //  friend class CharismaAltar;
  //  friend class LuckAltar;
  //  friend class GoldAltar;
  //  friend class WeaponAltar;

};

#endif