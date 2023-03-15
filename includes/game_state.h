#ifndef _GAME_STATE_H_
#define _GAME_STATE_H_
#include <iostream>
#include "creature/player.h"
#include "location/chapel.h"
#include "location/forest.h"
#include "location/square.h"
#include "location/tavern.h"
#include "location/innkeeper.h"
#include "location/gamblers.h"
#include "location/ladies.h"
#include "location/priest.h"
#include "location/thugs.h"
#include "location/altars.h"
#include "location/order_beer.h"
#include "location/trade.h"
#include "location/buying.h"
#include "location/selling.h"
#include "location/gossip.h"
#include "location/hot_dish.h"
#include "equipment.h"

class Sword;
class Bow;
class ChapelKey;
class PointPlayer;
class Priest;

class GameState {

    int* i_ptr;

    Player player;
    Equipment trade_goods;
    Equipment equipment;
    PointPlayer point_player;

    // NPC's

    Priest priest;

    // Locations

    Square square;
        Tavern tavern;
            Innkeeper innkeeper;
                OrderBeer order_beer;
                Trade trade;
                    Buying buying;
                    Selling selling;
                Gossip gossip;
                HotDish hot_dish;
            Gamblers gamblers;
        // Priest priest;
            Ladies ladies;
    Forest forest;
        ForestExploration forest_exploration;
            ForestAttack forest_attack;
            FoundFood found_food;
            FoundNothing found_nothing;
            Hunting hunting;
        Thugs thugs;
            PayForEntrance pay_for_entrance;
            AttackThugs attack_thugs;
            CharismaTrial charisma_trial;
    ChapelsDoor chapels_door;
        Chapel chapel;
            Altars altars;
                StrengthAltar strength_altar;
                CharismaAltar charisma_altar;
                LuckAltar luck_altar;
                GoldAltar gold_altar;
                WeaponAltar weapon_altar;    
            Dungeons dungeons;
                DungeonsAttack dungeons_attack;
                FoundTreasures found_treasures;
                DungeonsNothing dungeons_nothing;

    // Items

    ChapelKey chapel_key;
    Leather leather;
    Meat meat;

    Location *current_location;

public:

    void display_location();
    void get_i_ptr(int* i);

    GameState(int* i);
    ~GameState();

};

#endif