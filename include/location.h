#ifndef _LOCATION_H_
#define _LOCATION_H_

#include "../include/creature/player.h"

#include <iostream>
#include <vector>

class Location {

    std::string name;
    std::string description;
    std::string choice_1;
    std::string choice_2;
    std::string choice_3;
    std::string choice_4;
    std::string choice_5;
    Player* player;

    std::vector <Location*> related_locations;

public:

    void player_pointer(Player* ptr);
    void print_location();
    void clear();
    virtual Location* making_a_choice()=0;
    
    void equipment_menu();
    void save_menu();
    void load_menu();
    void exit_menu();

    Location(std::string name_val = "nowhere", std::string description_val = "none", std::string choice_1_val = "none", std::string choice_2_val = "none", std::string choice_3_val = "none", std::string choice_4_val = "none", std::string choice_5_val = "none");
    ~Location();
    
    friend class GameState;
    friend class Square;
    friend class ChapelsDoor;
    friend class Chapel;
    friend class Forest;
    friend class Tavern;
        friend class OrderBeer;
        friend class Trade;
            friend class Buying;
            friend class Selling;
        friend class Gossip;
        friend class HotDish;
    friend class Innkeeper;
    friend class Gamblers;
    friend class Priest;
    friend class Ladies;
    friend class Altars;
        friend class StrengthAltar;
        friend class CharismaAltar;
        friend class LuckAltar;
        friend class GoldAltar;
        friend class WeaponAltar;
    friend class Trade;
    friend class Exploration;
    friend class ForestExploration;
        friend class ForestAttack;
        friend class FoundFood;
        friend class FoundNothing;
        friend class Hunting;
    friend class Thugs;
        friend class PayForEntrance;
        friend class AttackThugs;
        friend class CharismaTrial;
    friend class Dungeons;
        friend class FoundTreasures;
        friend class DungeonsNothing;
        friend class DungeonsAttack;
};

#endif