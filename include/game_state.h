#ifndef _GAME_STATE_H_
#define _GAME_STATE_H_

#include "location/Square.hpp"
#include "location/Tavern.hpp"
#include "location/ladies.h"
#include "location/innkeeper.h"
#include "location/gamblers.h"
#include "location/priest.h"
#include "location/altars.h"
#include "location/dungeons.h"
#include "location/Chapel.hpp"
#include "location/Forest.hpp"
#include "location/forest_exploration.h"
#include "location/thugs.h"

#include "screen_stuff.h"
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

    void display_location();

private:

    int i_ptr;

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