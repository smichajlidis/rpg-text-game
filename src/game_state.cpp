#include <iostream>
#include "../includes/game_state.h"

void GameState::display_location() {
    if (player.drunk > 0)
        player.drunk--;
    player.display_top_bar();
    (*current_location).print_location();
    current_location = current_location->making_a_choice();
}

GameState::GameState() {
    current_location = &square;
    // LOCATION INITIALIZATION
    square.related_locations.push_back(&square);
    square.related_locations.push_back(&tavern);
    square.related_locations.push_back(&forest);
    square.related_locations.push_back(&chapel);
    square.player_pointer(&player);

    tavern.related_locations.push_back(&square);
    tavern.related_locations.push_back(&innkeeper);
    tavern.related_locations.push_back(&gamblers);
    tavern.related_locations.push_back(&priest);
    tavern.related_locations.push_back(&ladies);
    tavern.related_locations.push_back(&tavern);
    tavern.player_pointer(&player);

    forest.related_locations.push_back(&square);
    forest.related_locations.push_back(&forest_exploration);
    forest.related_locations.push_back(&thugs);
    forest.related_locations.push_back(&forest);
    forest.player_pointer(&player);

    chapel.related_locations.push_back(&square);
    chapel.related_locations.push_back(&altars);
    chapel.related_locations.push_back(&dungeons);
    chapel.player_pointer(&player);

    innkeeper.related_locations.push_back(&tavern);
    innkeeper.related_locations.push_back(&order_beer);
    innkeeper.related_locations.push_back(&trade);
    innkeeper.related_locations.push_back(&gossip);
    innkeeper.related_locations.push_back(&hot_dish);
    innkeeper.related_locations.push_back(&innkeeper);
    innkeeper.player_pointer(&player);

    gamblers.related_locations.push_back(&tavern);
    gamblers.related_locations.push_back(&gamblers);
    gamblers.point_player(&player);
    gamblers.player_pointer(&player);

    ladies.related_locations.push_back(&tavern);
    ladies.related_locations.push_back(&ladies);
    ladies.point_player(&player);
    ladies.player_pointer(&player);

    priest.related_locations.push_back(&tavern);
    priest.related_locations.push_back(&priest);
    priest.point_player(&player);
    Item* chapel_key {nullptr};
    chapel_key = new ChapelKey;
    priest.equipment.items.push_back(chapel_key);
    priest.player_pointer(&player);

    thugs.related_locations.push_back(&forest);
    thugs.related_locations.push_back(&thugs);
    thugs.player_pointer(&player);

    altars.related_locations.push_back(&chapel);
    altars.related_locations.push_back(&altars);
    altars.player_pointer(&player);

    order_beer.point_player(&player);
    order_beer.related_locations.push_back(&innkeeper);
    order_beer.player_pointer(&player);

    trade.related_locations.push_back(&innkeeper);
    trade.related_locations.push_back(&buying);
    trade.related_locations.push_back(&selling);
    trade.related_locations.push_back(&trade);
    trade.player_pointer(&player);

    selling.point_equipment(&player.equipment);
    selling.point_trade_goods(&trade_goods);
    selling.related_locations.push_back(&trade);
    selling.related_locations.push_back(&selling);
    selling.player_pointer(&player);

    buying.point_equipment(&player.equipment);
    buying.point_trade_goods(&trade_goods);
    buying.related_locations.push_back(&trade);
    buying.related_locations.push_back(&buying);
    buying.player_pointer(&player);

    gossip.related_locations.push_back(&innkeeper);
    gossip.related_locations.push_back(&gossip);
    gossip.player_pointer(&player);

    hot_dish.related_locations.push_back(&innkeeper);
    hot_dish.point_player(&player);
    hot_dish.player_pointer(&player);

    forest_exploration.related_locations.push_back(&forest);
    forest_exploration.player_pointer(&player);

    dungeons.related_locations.push_back(&chapel);
    dungeons.player_pointer(&player);

    // ADDING ITEMS FOR TRADING
    Item* sword2 {nullptr};
    sword2 = new Sword;
    player.equipment.items.push_back(sword2);


    Item* sword {nullptr};
    sword = new Sword;
    trade_goods.items.push_back(sword);

    (*(trade_goods.items).at(0)).increase_amount(2);

    Item* bow {nullptr};
    bow = new Bow;
    trade_goods.items.push_back(bow);

    Item* forest_fruits {nullptr};
    forest_fruits = new ForestFruits;
    forest_exploration.related_items.push_back(forest_fruits);

    Item* bow2 {nullptr};
    bow2 = new Bow;
    dungeons.related_items.push_back(bow2);

}

GameState::~GameState() {
}