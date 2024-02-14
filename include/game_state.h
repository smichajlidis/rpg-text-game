#ifndef _GAME_STATE_H_
#define _GAME_STATE_H_

#include "creature/player.h"
#include "creature/thug.h"
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
#include "location/forest_exploration.h"
#include "location/found_food.h"
#include "location/hunting.h"
#include "location/pay_for_entrance.h"
#include "location/attack_thugs.h"
#include "location/charisma_trial.h"
#include "location/chapels_door.h"
#include "location/strength_altar.h"
#include "location/charisma_altar.h"
#include "location/gold_altar.h"
#include "location/weapon_altar.h"
#include "location/dungeons.h"
#include "location/dungeons_attack.h"
#include "location/found_treasures.h"
#include "location/dungeons_nothing.h"
#include "item/chapel_key.h"
#include "item/leather.h"
#include "item/meat.h"
#include "location/forest_attack.h"
#include "location/found_nothing.h"
#include "location/luck_altar.h"
#include "screen_stuff.h"

#include "SavingMenu.hpp"
#include "LoadingMenu.hpp"
#include "ExitingMenu.hpp"

#include <memory>

class Sword;
class Bow;
class ChapelKey;
class PointPlayer;
class Priest;

class GameState {

    int i_ptr;

    ScreenStuff screen_stuff;

    Player player;
    Equipment trade_goods;
    Equipment equipment;
    SavingMenu saving_menu;
    LoadingMenu loading_menu;
    ExitingMenu exiting_menu;
    PointPlayer point_player;

    // NPC's

    //Priest priest;

    // Locations

    std::shared_ptr<Location> current_location;

    std::shared_ptr<Square> square;
        std::shared_ptr<Tavern> tavern;
            std::shared_ptr<Innkeeper> innkeeper;
            std::shared_ptr<Gamblers> gamblers;
            std::shared_ptr<Priest> priest;
            std::shared_ptr<Ladies> ladies;
        std::shared_ptr<Forest> forest;
            std::shared_ptr<ForestExploration> forest_exploration;
            std::shared_ptr<Thugs> thugs;
        std::shared_ptr<Chapel> chapel;
            std::shared_ptr<Altars> altars;
            std::shared_ptr<Dungeons> dungeons;

    //     //Tavern tavern;
    //         Innkeeper innkeeper;
    //             OrderBeer order_beer;
    //             Trade trade;
    //                 Buying buying;
    //                 Selling selling;
    //             Gossip gossip;
    //             HotDish hot_dish;
    //         Gamblers gamblers;
    //     // Priest priest;
    //         Ladies ladies;
    // //Forest forest;
    //     ForestExploration forest_exploration;
    //         ForestAttack forest_attack;
    //         FoundFood found_food;
    //         FoundNothing found_nothing;
    //         Hunting hunting;
    //     Thugs thugs;
    //         PayForEntrance pay_for_entrance;
    //         AttackThugs attack_thugs;
    //         CharismaTrial charisma_trial;
    // ChapelsDoor chapels_door;
    //     //Chapel chapel;
    //         Altars altars;
    //             StrengthAltar strength_altar;
    //             CharismaAltar charisma_altar;
    //             LuckAltar luck_altar;
    //             GoldAltar gold_altar;
    //             WeaponAltar weapon_altar;    
    //         Dungeons dungeons;
    //             DungeonsAttack dungeons_attack;
    //             FoundTreasures found_treasures;
    //             DungeonsNothing dungeons_nothing;

    // Items

    ChapelKey chapel_key;
    Leather leather;
    Meat meat;

    

public:

    void display_location();
    //void get_i_ptr(int* i);

    GameState();
    ~GameState();

};

#endif