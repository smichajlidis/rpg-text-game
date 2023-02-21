#include <iostream>
#include "../includes/game_state.h"

void GameState::display_location() {
    (*current_location).print_location();
    current_location = current_location->making_a_choice();
}

GameState::GameState() {
    current_location = &square;
    
    square.related_locations.push_back(&square);
    square.related_locations.push_back(&tavern);
    square.related_locations.push_back(&forest);
    square.related_locations.push_back(&closed_chapel);

    tavern.related_locations.push_back(&square);
    tavern.related_locations.push_back(&innkeeper);
    tavern.related_locations.push_back(&gamblers);
   // tavern.related_locations.push_back(&priest);
   // tavern.related_locations.push_back(&ladies);

    forest.related_locations.push_back(&square);
  //  forest.related_locations.push_back(&forest_exploration);
  //  forest.related_locations.push_back(&thugs);

    closed_chapel.related_locations.push_back(&square);

    innkeeper.related_locations.push_back(&tavern);
   // innkeeper.related_locations.push_back(&beer);
   // innkeeper.related_locations.push_back(&trade;
   // innkeeper.related_locations.push_back(&gossip);
   // innkeeper.related_locations.push_back(&ladies);

   gamblers.related_locations.push_back(&tavern);
}

GameState::~GameState() {
}