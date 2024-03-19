#include "../include/GameState.hpp"

#include "location/Square.hpp"
#include "location/Tavern.hpp"
//#include "location/Ladies.hpp"
#include "location/Flirting.hpp"
#include "location/GoUpstairs.hpp"
//#include "location/Innkeeper.hpp"
    #include "location/OrderBeer.hpp"
        #include "location/OrderBeerSuccess.hpp"
#include "location/Trade.hpp"
#include "location/Buying.hpp"
#include "location/Selling.hpp"
#include "location/Gossip.hpp"
    #include "location/HotMeal.hpp"
        #include "location/HotMealSuccess.hpp"
//#include "location/Gamblers.hpp"
#include "location/Bet.hpp"
    #include "location/BetSuccess.hpp"
    #include "location/BetFail.hpp"
#include "location/ApproachingPriest.hpp"
    #include "location/PriestSuccess.hpp"
    #include "location/PriestFail.hpp"
        #include "location/DrinkingWithPriest.hpp"
            #include "location/DrinkingWithPriestSuccess.hpp"
            #include "location/DrinkingWithPriestFail.hpp"
        #include "location/AskingAboutChapel.hpp"
            #include "location/AskingAboutChapelFail.hpp"
            #include "location/AskingAboutChapelSuccess.hpp"
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

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

GameState::GameState() {
    player = std::make_shared<Player>();
    
    priest = std::make_shared<NPC>();
    Item chapel_key {"chapel_key"};
    priest->addItem(std::move(chapel_key));

    //     thugs = std::make_shared<Thugs>(player);
    //         paying_thugs = std::make_shared<PayingThugs>(player);
    //         paying_thugs->setRelatedLocations(thugs, forest);
    //         convince_thugs = std::make_shared<ConvinceThugs>(player);
    //         convince_thugs->setRelatedLocations(convince_thugs, thugs, forest);
    //         attack_thugs = std::make_shared<AttackThugs>(player);
    //         attack_thugs->setRelatedLocations(attack_thugs, forest);
    //     thugs->setRelatedLocations(paying_thugs, convince_thugs, attack_thugs, forest);
    //     forest_exploration = std::make_shared<ForestExploration>();
    //     forest_exploration->setRelatedLocations(forest_exploration, forest); 
    // closed_chapel = std::make_shared<ClosedChapel>(player);
    // closed_chapel->setRelatedLocations(square);
    // chapel = std::make_shared<Chapel>();
    // //innkeeper = std::make_shared<Innkeeper>(player);
    //     order_beer_success = std::make_shared<OrderBeerSuccess>(player);
    //     order_beer_fail = std::make_shared<NotEnoughMoney>();
    //     //order_beer_fail->setRelatedLocations(innkeeper);
    //         order_beer = std::make_shared<OrderBeer>(player);
    //         order_beer->setRelatedLocations(order_beer_success, order_beer_fail);
    //     //order_beer_success->setRelatedLocations(order_beer, innkeeper, tavern);
    // buying = std::make_shared<Buying>(player);
    // selling = std::make_shared<Selling>(player);
    // //buying->setRelatedLocations(selling, innkeeper);
    // //selling->setRelatedLocations(buying, innkeeper);
    // trade = std::make_shared<Trade>(player);
    // //trade->setRelatedLocations(buying, selling, innkeeper);
    // gossip = std::make_shared<Gossip>(player);
    //     hot_meal_success = std::make_shared<HotMealSuccess>(player);
    //     hot_meal_fail = std::make_shared<NotEnoughMoney>();
    //     //hot_meal_fail->setRelatedLocations(innkeeper);
    //         hot_meal = std::make_shared<HotMeal>(player);
    //         hot_meal->setRelatedLocations(hot_meal_success, hot_meal_fail);
    //     //hot_meal_success->setRelatedLocations(hot_meal, innkeeper);
    // //innkeeper->setRelatedLocations(order_beer, trade, gossip, hot_meal, tavern);
    // //gossip->setRelatedLocations(innkeeper);
    // //gamblers = std::make_shared<Gamblers>(player);
    //     bet = std::make_shared<Bet>(player);
    // //gamblers->setRelatedLocations(bet, bet, bet, bet, tavern);
    //     bet_success = std::make_shared<BetSuccess>(player);
    //     bet_fail = std::make_shared<BetFail>(player);
    //     //bet_success->setRelatedLocations(gamblers, tavern);
    //     //bet_fail->setRelatedLocations(gamblers, tavern);
    //     bet_no_money = std::make_shared<NotEnoughMoney>();
    //     //bet_no_money->setRelatedLocations(gamblers);
    // bet->setRelatedLocations(bet_success, bet_fail, bet_no_money);
    // approaching_priest = std::make_shared<ApproachingPriest>(player);
    //     priest_success = std::make_shared<PriestSuccess>(player);
    //     priest_success->addNPC(priest);
    //     priest_fail = std::make_shared<PriestFail>(player);
    //     priest_fail->addNPC(priest);
    //     asking_about_chapel = std::make_shared<AskingAboutChapel>(player);
    //         asking_about_chapel_fail = std::make_shared<AskingAboutChapelFail>(player);
    //         asking_about_chapel_success = std::make_shared<AskingAboutChapelSuccess>(player);
    //         asking_about_chapel_fail->setRelatedLocations(approaching_priest);
    //         asking_about_chapel_success->setRelatedLocations(tavern);
    //         asking_about_chapel_success->addNPC(priest);
    //         asking_about_chapel_fail->addNPC(priest);
    //     asking_about_chapel->setRelatedLocations(asking_about_chapel_success, asking_about_chapel_fail);
    //     asking_about_chapel->addNPC(priest);
    //     drinking_with_priest = std::make_shared<DrinkingWithPriest>(player);
    //     drinking_with_priest->addNPC(priest);
    //         drinking_with_priest_success = std::make_shared<DrinkingWithPriestSuccess>(player);
    //         drinking_with_priest_success->setRelatedLocations(drinking_with_priest, asking_about_chapel, tavern);
    //         drinking_with_priest_success->addNPC(priest);
    //         drinking_with_priest_fail = std::make_shared<DrinkingWithPriestFail>(player);
    //         drinking_with_priest_fail->setRelatedLocations(priest_success);
    //         drinking_with_priest_fail->addNPC(priest);
    //     drinking_with_priest->setRelatedLocations(drinking_with_priest_success, drinking_with_priest_fail);
    //     priest_success->setRelatedLocations(drinking_with_priest, asking_about_chapel, tavern);
    //     priest_fail->setRelatedLocations(tavern);
    // approaching_priest->setRelatedLocations(priest_success, priest_fail); 
    // //ladies = std::make_shared<Ladies>(player);
    // go_upstairs = std::make_shared<GoUpstairs>(player);
    // go_upstairs->setRelatedLocations(tavern);
    // flirting = std::make_shared<Flirting>(player);
    // flirting->setRelatedLocations(flirting, go_upstairs, tavern);
    // //ladies->setRelatedLocations(go_upstairs, flirting, tavern);   

    // altars = std::make_shared<Altars>();
    // dungeons = std::make_shared<Dungeons>(); 
    // chapel->setRelatedLocations(altars, dungeons, square);

    top_bar.pointToPlayer(player);

    equipment_menu.addPlayer(player);
    loading_menu.addPlayer(player);
    saving_menu.addPlayer(player);

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
                //current_location = current_location->moveToLocation(choice);
                current_location = getLocation(current_location->getNextLocationName(choice));
                if (current_location->getDescription().empty()) {
                    //current_location = current_location->moveToLocation(choice);
                    current_location = getLocation(current_location->getNextLocationName(choice));
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

void GameState::addLocation(const std::string& name, std::shared_ptr<Location> ptr) {
    locations.insert({name, std::move(ptr)});
}

void GameState::addNPC(const std::string& name, std::shared_ptr<NPC> ptr) {
    npcs.insert({name, std::move(ptr)});
}

void GameState::passItsPointerToSquare() {
    square = std::make_shared<Square>(std::shared_ptr<GameState>(shared_from_this()));
    addLocation("square", square);
    square->setRelatedLocations(tavern, forest, closed_chapel);
    current_location = square;
}

std::shared_ptr<Location> GameState::getLocation(const std::string& name) const {
    auto it = locations.find(name);
    if (it != locations.end()) {
        return it->second;
    } else {
        return current_location;
    }
}

std::shared_ptr<NPC> GameState::getNPC(const std::string& name) const {
    auto it = npcs.find(name);
    if (it != npcs.end()) {
        return it->second;
    } else {
        return nullptr;
    }
}

std::shared_ptr<Player> GameState::getPlayer() const {
    return player;
}