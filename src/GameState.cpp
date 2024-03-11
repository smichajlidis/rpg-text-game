#include "../include/GameState.hpp"

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

GameState::GameState() {
    player = std::make_shared<Player>();
    square = std::make_shared<Square>();
    tavern = std::make_shared<Tavern>(); 
    forest = std::make_shared<Forest>();
        thugs = std::make_shared<Thugs>();
            paying_thugs = std::make_shared<PayingThugs>();
            paying_thugs->getRelatedLocations(thugs, forest);
            convince_thugs = std::make_shared<ConvinceThugs>();
            convince_thugs->getRelatedLocations(convince_thugs, thugs, forest);
            attack_thugs = std::make_shared<AttackThugs>();
            attack_thugs->getRelatedLocations(attack_thugs, forest);
        thugs->getRelatedLocations(paying_thugs, convince_thugs, attack_thugs, forest);
        forest_exploration = std::make_shared<ForestExploration>();
        forest_exploration->getRelatedLocations(forest_exploration, forest); 
        forest->getRelatedLocations(forest_exploration, thugs, square);
    closed_chapel = std::make_shared<ClosedChapel>();
    closed_chapel->getRelatedLocations(square);
    chapel = std::make_shared<Chapel>();
    square->getRelatedLocations(tavern, forest, closed_chapel);
    innkeeper = std::make_shared<Innkeeper>();
        order_beer_success = std::make_shared<OrderBeerSuccess>();
        order_beer_fail = std::make_shared<NotEnoughMoney>();
        order_beer_fail->getRelatedLocations(innkeeper);
            order_beer = std::make_shared<OrderBeer>(player);
            order_beer->getRelatedLocations(order_beer_success, order_beer_fail);
        order_beer_success->getRelatedLocations(order_beer, innkeeper);
    buying = std::make_shared<Buying>(player);
    selling = std::make_shared<Selling>(player);
    buying->getRelatedLocations(selling, innkeeper);
    selling->getRelatedLocations(buying, innkeeper);
    trade = std::make_shared<Trade>();
    trade->getRelatedLocations(buying, selling, innkeeper);
    gossip = std::make_shared<Gossip>();
        hot_meal_success = std::make_shared<HotMealSuccess>();
        hot_meal_fail = std::make_shared<NotEnoughMoney>();
        hot_meal_fail->getRelatedLocations(innkeeper);
            hot_meal = std::make_shared<HotMeal>(player);
            hot_meal->getRelatedLocations(hot_meal_success, hot_meal_fail);
        hot_meal_success->getRelatedLocations(hot_meal, innkeeper);
    innkeeper->getRelatedLocations(order_beer, trade, gossip, hot_meal, tavern);
    gossip->getRelatedLocations(innkeeper);
    gamblers = std::make_shared<Gamblers>();
    bet = std::make_shared<Bet>(player);
    gamblers->getRelatedLocations(bet, bet, bet, bet, tavern);
    bet_success = std::make_shared<BetSuccess>();
    bet_fail = std::make_shared<BetFail>();
    bet_success->getRelatedLocations(gamblers, tavern);
    bet_fail->getRelatedLocations(gamblers, tavern);
    bet_no_money = std::make_shared<NotEnoughMoney>();
    bet_no_money->getRelatedLocations(gamblers);
    bet->getRelatedLocations(bet_success, bet_fail, bet_no_money);
    priest = std::make_shared<Priest>();
    asking_about_chapel = std::make_shared<AskingAboutChapel>();
    asking_about_chapel->getRelatedLocations(priest);
    drinking_with_priest = std::make_shared<DrinkingWithPriest>(player);
        drinking_with_priest_success = std::make_shared<DrinkingWithPriestSuccess>();
        drinking_with_priest_success->getRelatedLocations(drinking_with_priest, asking_about_chapel, tavern);
        drinking_with_priest_fail = std::make_shared<DrinkingWithPriestFail>();
        drinking_with_priest_fail->getRelatedLocations(priest);
    drinking_with_priest->getRelatedLocations(drinking_with_priest_success, drinking_with_priest_fail);
    priest->getRelatedLocations(drinking_with_priest, asking_about_chapel, tavern); 
    ladies = std::make_shared<Ladies>();
    go_upstairs = std::make_shared<GoUpstairs>();
    go_upstairs->getRelatedLocations(tavern);
    flirting = std::make_shared<Flirting>();
    flirting->getRelatedLocations(flirting, go_upstairs, tavern);
    ladies->getRelatedLocations(go_upstairs, flirting, tavern);   
    tavern->getRelatedLocations(innkeeper, gamblers, priest, ladies, square);

    altars = std::make_shared<Altars>();
    dungeons = std::make_shared<Dungeons>(); 
    chapel->getRelatedLocations(altars, dungeons, square);

    current_location = square;
    top_bar.pointToPlayer(player);
}

void GameState::displayLocation() {
    std::string input;
    char c {};

    do {
        player->updateAfterEachRound();
        top_bar.displayTopBar();
        current_location->printLocation();

        std::cin >> input;

        std::istringstream iss(input);
        std::uint32_t choice;

        screen_stuff.clear();

        if (iss >> choice) {
            if (current_location->inputValidation(choice)) {
                current_location = current_location->action(choice);
                if (current_location->getDescription().empty()) {
                    current_location = current_location->action(choice);
                }
            }
        }
        else {
            c = std::toupper(input.at(0));
            switch(c) {
                case 'E':
                    equipment_menu.displayEquipmentMenu();
                    break;
                case 'L':
                    loading_menu.displayLoadingMenu();
                    break;
                case 'S':
                    saving_menu.displaySavingMenu();
                    break;
                case 'Q':
                    exiting_menu.displayExitingMenu();
                    break;
                default:
                    break;
            }
        }

        screen_stuff.clear();

    } while(c != 'Q');
}

