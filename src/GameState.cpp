#include "../include/GameState.hpp"

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

GameState::GameState() {
    player = std::make_shared<Player>();
    
    priest = std::make_shared<NPC>();
    Item chapel_key;
    priest->addItem(std::move(chapel_key));

    square = std::make_shared<Square>();
    tavern = std::make_shared<Tavern>(); 
    forest = std::make_shared<Forest>();
        thugs = std::make_shared<Thugs>(player);
            paying_thugs = std::make_shared<PayingThugs>(player);
            paying_thugs->getRelatedLocations(thugs, forest);
            convince_thugs = std::make_shared<ConvinceThugs>(player);
            convince_thugs->getRelatedLocations(convince_thugs, thugs, forest);
            attack_thugs = std::make_shared<AttackThugs>(player);
            attack_thugs->getRelatedLocations(attack_thugs, forest);
        thugs->getRelatedLocations(paying_thugs, convince_thugs, attack_thugs, forest);
        forest_exploration = std::make_shared<ForestExploration>();
        forest_exploration->getRelatedLocations(forest_exploration, forest); 
        forest->getRelatedLocations(forest_exploration, thugs, square);
    closed_chapel = std::make_shared<ClosedChapel>(player);
    closed_chapel->getRelatedLocations(square);
    chapel = std::make_shared<Chapel>();
    square->getRelatedLocations(tavern, forest, closed_chapel);
    innkeeper = std::make_shared<Innkeeper>(player);
        order_beer_success = std::make_shared<OrderBeerSuccess>(player);
        order_beer_fail = std::make_shared<NotEnoughMoney>();
        order_beer_fail->getRelatedLocations(innkeeper);
            order_beer = std::make_shared<OrderBeer>(player);
            order_beer->getRelatedLocations(order_beer_success, order_beer_fail);
        order_beer_success->getRelatedLocations(order_beer, innkeeper, tavern);
    buying = std::make_shared<Buying>(player);
    selling = std::make_shared<Selling>(player);
    buying->getRelatedLocations(selling, innkeeper);
    selling->getRelatedLocations(buying, innkeeper);
    trade = std::make_shared<Trade>(player);
    trade->getRelatedLocations(buying, selling, innkeeper);
    gossip = std::make_shared<Gossip>(player);
        hot_meal_success = std::make_shared<HotMealSuccess>(player);
        hot_meal_fail = std::make_shared<NotEnoughMoney>();
        hot_meal_fail->getRelatedLocations(innkeeper);
            hot_meal = std::make_shared<HotMeal>(player);
            hot_meal->getRelatedLocations(hot_meal_success, hot_meal_fail);
        hot_meal_success->getRelatedLocations(hot_meal, innkeeper);
    innkeeper->getRelatedLocations(order_beer, trade, gossip, hot_meal, tavern);
    gossip->getRelatedLocations(innkeeper);
    gamblers = std::make_shared<Gamblers>(player);
        bet = std::make_shared<Bet>(player);
    gamblers->getRelatedLocations(bet, bet, bet, bet, tavern);
        bet_success = std::make_shared<BetSuccess>(player);
        bet_fail = std::make_shared<BetFail>(player);
        bet_success->getRelatedLocations(gamblers, tavern);
        bet_fail->getRelatedLocations(gamblers, tavern);
        bet_no_money = std::make_shared<NotEnoughMoney>();
        bet_no_money->getRelatedLocations(gamblers);
    bet->getRelatedLocations(bet_success, bet_fail, bet_no_money);
    approaching_priest = std::make_shared<ApproachingPriest>(player);
        priest_success = std::make_shared<PriestSuccess>(player);
        priest_success->addNPC(priest);
        priest_fail = std::make_shared<PriestFail>(player);
        priest_fail->addNPC(priest);
        asking_about_chapel = std::make_shared<AskingAboutChapel>(player);
            asking_about_chapel_fail = std::make_shared<AskingAboutChapelFail>(player);
            asking_about_chapel_success = std::make_shared<AskingAboutChapelSuccess>(player);
            asking_about_chapel_fail->getRelatedLocations(approaching_priest);
            asking_about_chapel_success->getRelatedLocations(tavern);
            asking_about_chapel_success->addNPC(priest);
            asking_about_chapel_fail->addNPC(priest);
        asking_about_chapel->getRelatedLocations(asking_about_chapel_success, asking_about_chapel_fail);
        asking_about_chapel->addNPC(priest);
        drinking_with_priest = std::make_shared<DrinkingWithPriest>(player);
        drinking_with_priest->addNPC(priest);
            drinking_with_priest_success = std::make_shared<DrinkingWithPriestSuccess>(player);
            drinking_with_priest_success->getRelatedLocations(drinking_with_priest, asking_about_chapel, tavern);
            drinking_with_priest_success->addNPC(priest);
            drinking_with_priest_fail = std::make_shared<DrinkingWithPriestFail>(player);
            drinking_with_priest_fail->getRelatedLocations(priest_success);
            drinking_with_priest_fail->addNPC(priest);
        drinking_with_priest->getRelatedLocations(drinking_with_priest_success, drinking_with_priest_fail);
        priest_success->getRelatedLocations(drinking_with_priest, asking_about_chapel, tavern);
        priest_fail->getRelatedLocations(tavern);
    approaching_priest->getRelatedLocations(priest_success, priest_fail); 
    ladies = std::make_shared<Ladies>(player);
    go_upstairs = std::make_shared<GoUpstairs>(player);
    go_upstairs->getRelatedLocations(tavern);
    flirting = std::make_shared<Flirting>(player);
    flirting->getRelatedLocations(flirting, go_upstairs, tavern);
    ladies->getRelatedLocations(go_upstairs, flirting, tavern);   
    tavern->getRelatedLocations(innkeeper, gamblers, approaching_priest, ladies, square);

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
                current_location = current_location->moveToLocation(choice);
                if (current_location->getDescription().empty()) {
                    current_location = current_location->moveToLocation(choice);
                }
            }
        }
        else {
            c = std::toupper(input.at(0));
            switch(c) {
                case 'E':
                    equipment_menu.displayMenu();
                    break;
                case 'L':
                    loading_menu.displayMenu();
                    break;
                case 'S':
                    saving_menu.displayMenu();
                    break;
                case 'Q':
                    exiting_menu.displayMenu();
                    break;
                default:
                    break;
            }
        }

        screen_stuff.clear();

    } while(c != 'Q');
}

