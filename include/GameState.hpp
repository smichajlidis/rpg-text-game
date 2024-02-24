#ifndef _GAME_STATE_HPP_
#define _GAME_STATE_HPP_

#include "location/Square.hpp"
#include "location/Tavern.hpp"
#include "location/Ladies.hpp"
#include "location/Innkeeper.hpp"
#include "location/OrderBeer.hpp"
#include "location/Trade.hpp"
#include "location/Buying.hpp"
#include "location/Selling.hpp"
#include "location/Gossip.hpp"
#include "location/HotMeal.hpp"
#include "location/Gamblers.hpp"
#include "location/Priest.hpp"
#include "location/Altars.hpp"
#include "location/Dungeons.hpp"
#include "location/Chapel.hpp"
#include "location/Forest.hpp"
#include "location/ForestExploration.hpp"
#include "location/Thugs.hpp"

#include "ScreenStuff.hpp"
#include "SavingMenu.hpp"
#include "LoadingMenu.hpp"
#include "ExitingMenu.hpp"
#include "equipment.h"

#include "creature/player.h"

#include <memory>

class GameState {
public:
    GameState();

    ~GameState() = default;

    void displayLocation();

private:

    ScreenStuff screen_stuff;

    Player player;
    Equipment trade_goods;
    Equipment equipment;
    SavingMenu saving_menu;
    LoadingMenu loading_menu;
    ExitingMenu exiting_menu;
    std::shared_ptr<Location> current_location;
 
    // Locations

    std::shared_ptr<Square> square;
        std::shared_ptr<Tavern> tavern;
            std::shared_ptr<Innkeeper> innkeeper;
                std::shared_ptr<OrderBeer> order_beer;
                std::shared_ptr<Trade> trade;
                    std::shared_ptr<Buying> buying;
                    std::shared_ptr<Selling> selling;
                std::shared_ptr<Gossip> gossip;
                std::shared_ptr<HotMeal> hot_meal;
            std::shared_ptr<Gamblers> gamblers;
            std::shared_ptr<Priest> priest;
            std::shared_ptr<Ladies> ladies;
        std::shared_ptr<Forest> forest;
            std::shared_ptr<ForestExploration> forest_exploration;
            std::shared_ptr<Thugs> thugs;
        std::shared_ptr<Chapel> chapel;
            std::shared_ptr<Altars> altars;
            std::shared_ptr<Dungeons> dungeons;
};

#endif