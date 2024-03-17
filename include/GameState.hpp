#ifndef _GAME_STATE_HPP_
#define _GAME_STATE_HPP_

class Location;

class Square;
class Tavern;
class Ladies;
    class Flirting;
    class GoUpstairs;
class Innkeeper;
    class OrderBeer;
    class OrderBeerSuccess;
    class Trade;
        class Buying;
        class Selling;
    class Gossip;
    class HotMeal;
        class HotMealSuccess;
class Gamblers;
class Bet;
    class BetSuccess;
    class BetFail;
class ApproachingPriest;
    class PriestSuccess;
    class PriestFail;
        class DrinkingWithPriest;
            class DrinkingWithPriestSuccess;
            class DrinkingWithPriestFail;
        class AskingAboutChapel;
            class AskingAboutChapelFail;
            class AskingAboutChapelSuccess;
class Altars;
class Dungeons;
class Chapel;
class ClosedChapel;
class Forest;
class ForestExploration;
class Thugs;
class PayingThugs;
class ConvinceThugs;
class AttackThugs;
class NotEnoughMoney;
// #include "location/Square.hpp"
// #include "location/Tavern.hpp"
// #include "location/Ladies.hpp"
// #include "location/Flirting.hpp"
// #include "location/GoUpstairs.hpp"
// #include "location/Innkeeper.hpp"
//     #include "location/OrderBeer.hpp"
//         #include "location/OrderBeerSuccess.hpp"
// #include "location/Trade.hpp"
// #include "location/Buying.hpp"
// #include "location/Selling.hpp"
// #include "location/Gossip.hpp"
//     #include "location/HotMeal.hpp"
//         #include "location/HotMealSuccess.hpp"
// #include "location/Gamblers.hpp"
// #include "location/Bet.hpp"
//     #include "location/BetSuccess.hpp"
//     #include "location/BetFail.hpp"
// #include "location/ApproachingPriest.hpp"
//     #include "location/PriestSuccess.hpp"
//     #include "location/PriestFail.hpp"
//         #include "location/DrinkingWithPriest.hpp"
//             #include "location/DrinkingWithPriestSuccess.hpp"
//             #include "location/DrinkingWithPriestFail.hpp"
//         #include "location/AskingAboutChapel.hpp"
//             #include "location/AskingAboutChapelFail.hpp"
//             #include "location/AskingAboutChapelSuccess.hpp"
// #include "location/Altars.hpp"
// #include "location/Dungeons.hpp"
// #include "location/Chapel.hpp"
// #include "location/ClosedChapel.hpp"
// #include "location/Forest.hpp"
// #include "location/ForestExploration.hpp"
// #include "location/Thugs.hpp"
// #include "location/PayingThugs.hpp"
// #include "location/ConvinceThugs.hpp"
// #include "location/AttackThugs.hpp"
// #include "location/NotEnoughMoney.hpp"

#include "ScreenStuff.hpp"
#include "TopBar.hpp"
#include "SavingMenu.hpp"
#include "LoadingMenu.hpp"
#include "ExitingMenu.hpp"
#include "EquipmentMenu.hpp"

#include "Player.hpp"
#include "NPC.hpp"

#include <memory>
#include <unordered_map>

class GameState {
public:
    GameState();

    ~GameState() = default;

    void displayLocation();
    void addLocation(const std::string& name, std::shared_ptr<Location> ptr);

private:

    std::unordered_map<std::string, std::shared_ptr<Location>> locations;

    ScreenStuff screen_stuff;

    std::shared_ptr<Player> player;
    std::shared_ptr<NPC> priest;

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
            std::shared_ptr<ApproachingPriest> approaching_priest;
                std::shared_ptr<PriestSuccess> priest_success;
                std::shared_ptr<PriestFail> priest_fail;
                    std::shared_ptr<DrinkingWithPriest> drinking_with_priest;
                        std::shared_ptr<DrinkingWithPriestSuccess> drinking_with_priest_success;
                        std::shared_ptr<DrinkingWithPriestFail> drinking_with_priest_fail;
                    std::shared_ptr<AskingAboutChapel> asking_about_chapel;
                        std::shared_ptr<AskingAboutChapelSuccess> asking_about_chapel_success;
                        std::shared_ptr<AskingAboutChapelFail> asking_about_chapel_fail;
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