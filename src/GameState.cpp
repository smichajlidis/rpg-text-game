#include "../include/GameState.hpp"

#include <iostream>

GameState::GameState() {
    square = std::make_shared<Square>();
    tavern = std::make_shared<Tavern>(); 
    forest = std::make_shared<Forest>();
        thugs = std::make_shared<Thugs>();
        thugs->getRelatedLocations(forest);
        forest_exploration = std::make_shared<ForestExploration>();
        forest_exploration->getRelatedLocations(forest_exploration, forest); 
        forest->getRelatedLocations(forest_exploration, thugs, square);
    chapel = std::make_shared<Chapel>();
    square->getRelatedLocations(tavern, forest, chapel);
    innkeeper = std::make_shared<Innkeeper>();
    order_beer = std::make_shared<OrderBeer>();
    order_beer->getRelatedLocations(order_beer, innkeeper);
    buying = std::make_shared<Buying>();
    selling = std::make_shared<Selling>();
    buying->getRelatedLocations(selling, innkeeper);
    selling->getRelatedLocations(buying, innkeeper);
    trade = std::make_shared<Trade>();
    trade->getRelatedLocations(buying, selling, innkeeper);
    gossip = std::make_shared<Gossip>();
    hot_meal = std::make_shared<HotMeal>();
    hot_meal->getRelatedLocations(hot_meal, innkeeper);
    innkeeper->getRelatedLocations(order_beer, trade, gossip, hot_meal, tavern);
    gossip->getRelatedLocations(innkeeper);
    gamblers = std::make_shared<Gamblers>();
    bet_10 = std::make_shared<Bet>(10);
    bet_20 = std::make_shared<Bet>(20);
    bet_50 = std::make_shared<Bet>(50);
    bet_100 = std::make_shared<Bet>(100);
    gamblers->getRelatedLocations(bet_10, bet_20, bet_50, bet_100, tavern);
    bet_10->getRelatedLocations(bet_10, gamblers, tavern);
    bet_20->getRelatedLocations(bet_20, gamblers, tavern);
    bet_50->getRelatedLocations(bet_50, gamblers, tavern);
    bet_100->getRelatedLocations(bet_100, gamblers, tavern);
    priest = std::make_shared<Priest>();
    asking_about_chapel = std::make_shared<AskingAboutChapel>();
    asking_about_chapel->getRelatedLocations(priest);
    drinking_with_priest = std::make_shared<DrinkingWithPriest>();
    drinking_with_priest->getRelatedLocations(drinking_with_priest, asking_about_chapel, tavern);
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
}

void GameState::displayLocation() {
    std::uint32_t choice;

    do {
        if (player.drunk > 0)
            player.drunk--;
        player.display_top_bar();
        current_location->printLocation();

        std::cin >> choice;
        
        screen_stuff.clear();

        switch(choice) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                if (current_location->getNumberOfLocations() >= choice) {
                    current_location = current_location->moveToLocation(choice);
                }
                break;
            case 6:
                equipment.display_equipment();
                break;
            case 7:
                loading_menu.displayLoadingMenu();
                break;
            case 8:
                saving_menu.displaySavingMenu();
                break;
            case 9:
                exiting_menu.displayExitingMenu();
            default:
                break;
        }

        screen_stuff.clear();

    } while(choice != 9);
}