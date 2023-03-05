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

    tavern.related_locations.push_back(&square);
    tavern.related_locations.push_back(&innkeeper);
    tavern.related_locations.push_back(&gamblers);
    tavern.related_locations.push_back(&priest);
    tavern.related_locations.push_back(&ladies);
    tavern.related_locations.push_back(&tavern);

    forest.related_locations.push_back(&square);
    forest.related_locations.push_back(&thugs); // will be forest_exploration;
    forest.related_locations.push_back(&thugs);
    forest.related_locations.push_back(&forest);

    chapel.related_locations.push_back(&square);
    chapel.related_locations.push_back(&altars);
    chapel.related_locations.push_back(&chapel);

    innkeeper.related_locations.push_back(&tavern);
    innkeeper.related_locations.push_back(&order_beer);
    innkeeper.related_locations.push_back(&trade);
    innkeeper.related_locations.push_back(&gossip);
    innkeeper.related_locations.push_back(&hot_dish);
    innkeeper.related_locations.push_back(&innkeeper);

    gamblers.related_locations.push_back(&tavern);
    gamblers.related_locations.push_back(&gamblers);
    gamblers.point_player(&player);

    ladies.related_locations.push_back(&tavern);
    ladies.related_locations.push_back(&ladies);
    ladies.point_player(&player);

    priest.related_locations.push_back(&tavern);
    priest.related_locations.push_back(&priest);
    priest.point_player(&player);
    Item* chapel_key {nullptr};
    chapel_key = new ChapelKey;
    priest.equipment.items.push_back(chapel_key);

    thugs.related_locations.push_back(&forest);
    thugs.related_locations.push_back(&thugs);

    altars.related_locations.push_back(&chapel);
    altars.related_locations.push_back(&altars);

    order_beer.point_player(&player);
    order_beer.related_locations.push_back(&innkeeper);

    trade.related_locations.push_back(&innkeeper);
    trade.related_locations.push_back(&buying);
    trade.related_locations.push_back(&selling);
    trade.related_locations.push_back(&trade);

    selling.point_equipment(&player.equipment);
    selling.point_trade_goods(&trade_goods);
    selling.related_locations.push_back(&trade);
    selling.related_locations.push_back(&selling);

    buying.point_equipment(&player.equipment);
    buying.point_trade_goods(&trade_goods);
    buying.related_locations.push_back(&trade);
    buying.related_locations.push_back(&buying);

    gossip.related_locations.push_back(&innkeeper);
    gossip.related_locations.push_back(&gossip);

    hot_dish.related_locations.push_back(&innkeeper);
    hot_dish.point_player(&player);
  //  hot_dish.point_equipment(&equipment);

    // OTHER

  //  point_player.point_player(&player);
   // point_equipment.point_equipment(&equipment);

    // ADDING ITEMS FOR TRADING

    Item* sword {nullptr};
    sword = new Sword;
    trade_goods.items.push_back(sword);

    (*(trade_goods.items).at(0)).increase_amount(2);

    Item* bow {nullptr};
    bow = new Bow;
    trade_goods.items.push_back(bow);

}

GameState::~GameState() {
}