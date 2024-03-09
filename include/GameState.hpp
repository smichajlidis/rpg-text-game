#ifndef _GAME_STATE_HPP_
#define _GAME_STATE_HPP_

#include "location/Square.hpp"
#include "location/Tavern.hpp"
#include "location/Ladies.hpp"
#include "location/Flirting.hpp"
#include "location/GoUpstairs.hpp"
#include "location/Innkeeper.hpp"
    #include "location/OrderBeer.hpp"
        #include "location/OrderBeerSuccess.hpp"
#include "location/Trade.hpp"
#include "location/Buying.hpp"
#include "location/Selling.hpp"
#include "location/Gossip.hpp"
    #include "location/HotMeal.hpp"
        #include "location/HotMealSuccess.hpp"
#include "location/Gamblers.hpp"
#include "location/Bet.hpp"
    #include "location/BetSuccess.hpp"
    #include "location/BetFail.hpp"
#include "location/Priest.hpp"
#include "location/DrinkingWithPriest.hpp"
#include "location/AskingAboutChapel.hpp"
#include "location/Altars.hpp"
#include "location/Dungeons.hpp"
#include "location/Chapel.hpp"
#include "location/ClosedChapel.hpp"
#include "location/Forest.hpp"
#include "location/ForestExploration.hpp"
#include "location/Thugs.hpp"
#include "location/PayingThugs.hpp"
#include "location/ConvinceThugs.hpp"
#include "location/AttackThugs.hpp"
#include "location/NotEnoughMoney.hpp"

#include "ScreenStuff.hpp"
#include "TopBar.hpp"
#include "SavingMenu.hpp"
#include "LoadingMenu.hpp"
#include "ExitingMenu.hpp"
#include "EquipmentMenu.hpp"

#include "Player.hpp"

#include <memory>

class GameState {
public:
    GameState();

    ~GameState() = default;

    void displayLocation();

private:

    ScreenStuff screen_stuff;
    std::shared_ptr<Player> player;

    SavingMenu saving_menu;
    LoadingMenu loading_menu;
    ExitingMenu exiting_menu;
    EquipmentMenu equipment_menu;
    TopBar top_bar;
    std::shared_ptr<Location> current_location;
 
    // Locations

    std::shared_ptr<Square> square;
        std::shared_ptr<Tavern> tavern;
            std::shared_ptr<Innkeeper> innkeeper;
                std::shared_ptr<OrderBeer> order_beer;
                    std::shared_ptr<OrderBeerSuccess> order_beer_success;
                    std::shared_ptr<NotEnoughMoney> order_beer_fail;
                std::shared_ptr<Trade> trade;
                    std::shared_ptr<Buying> buying;
                    std::shared_ptr<Selling> selling;
                std::shared_ptr<Gossip> gossip;
                std::shared_ptr<HotMeal> hot_meal;
                    std::shared_ptr<HotMealSuccess> hot_meal_success;
                    std::shared_ptr<NotEnoughMoney> hot_meal_fail;
            std::shared_ptr<Gamblers> gamblers;
                std::shared_ptr<Bet> bet;
                    std::shared_ptr<BetSuccess> bet_success;
                    std::shared_ptr<BetFail> bet_fail;
                    std::shared_ptr<NotEnoughMoney> bet_no_money;
            std::shared_ptr<Priest> priest;
                std::shared_ptr<DrinkingWithPriest> drinking_with_priest;
                std::shared_ptr<AskingAboutChapel> asking_about_chapel;
            std::shared_ptr<Ladies> ladies;
                std::shared_ptr<Flirting> flirting;
                std::shared_ptr<GoUpstairs> go_upstairs;
        std::shared_ptr<Forest> forest;
            std::shared_ptr<ForestExploration> forest_exploration;
            std::shared_ptr<Thugs> thugs;
                std::shared_ptr<PayingThugs> paying_thugs;
                std::shared_ptr<ConvinceThugs> convince_thugs;
                std::shared_ptr<AttackThugs> attack_thugs;
        std::shared_ptr<Chapel> chapel;
        std::shared_ptr<ClosedChapel> closed_chapel;
            std::shared_ptr<Altars> altars;
            std::shared_ptr<Dungeons> dungeons;
};

#endif