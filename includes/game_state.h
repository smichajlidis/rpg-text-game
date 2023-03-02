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
//#include "point_player.h"

class Sword;
class Bow;
class PointPlayer;

class GameState {

    Player player;
    Equipment trade_goods;
    Equipment equipment;
    PointPlayer point_player;
  //  PointEquipment point_equipment;

    Chapel chapel;
    Forest forest;
    Square square;

    Tavern tavern;
        OrderBeer order_beer;
        Trade trade;
            Buying buying;
            Selling selling;
        Gossip gossip;
        HotDish hot_dish;
    Innkeeper innkeeper;
    Gamblers gamblers;
    Ladies ladies;
    Priest priest;
    Thugs thugs;
    Altars altars;


    Location *current_location;

public:

    void display_location();

    GameState();
    ~GameState();

};

#endif