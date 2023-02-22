#include <iostream>
#include "../includes/game_state.h"

void GameState::display_location() {
    if (player.drunk > 0)
        player.drunk--;
    player.display_top_bar();
    if ((*current_location).description != "none")
        (*current_location).print_location();
    current_location = current_location->making_a_choice();
}

GameState::GameState() {
    current_location = &square;
    
    square.related_locations.push_back(&square);
    square.related_locations.push_back(&tavern);
    square.related_locations.push_back(&forest);
    square.related_locations.push_back(&chapel);

    tavern.related_locations.push_back(&square);
    tavern.related_locations.push_back(&innkeeper);
    tavern.related_locations.push_back(&gamblers);
    tavern.related_locations.push_back(&priest);
    tavern.related_locations.push_back(&ladies);

    forest.related_locations.push_back(&square);
    forest.related_locations.push_back(&thugs); // will be forest_exploration;
    forest.related_locations.push_back(&thugs);

    chapel.related_locations.push_back(&square);
    chapel.related_locations.push_back(&altars);

    innkeeper.related_locations.push_back(&tavern);
    innkeeper.related_locations.push_back(&order_beer);
   // innkeeper.related_locations.push_back(&trade;
   // innkeeper.related_locations.push_back(&gossip);

    gamblers.related_locations.push_back(&tavern);

    ladies.related_locations.push_back(&tavern);

    priest.related_locations.push_back(&tavern);

    thugs.related_locations.push_back(&forest);

    altars.related_locations.push_back(&chapel);

    order_beer.point_player(&player);
    order_beer.related_locations.push_back(&innkeeper);

}

GameState::~GameState() {
}