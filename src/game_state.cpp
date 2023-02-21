#include <iostream>
#include "../includes/game_state.h"

void GameState::display_location() {
    (*current_location).print_location();
    current_location = current_location->making_a_choice();
}

GameState::GameState() {
    current_location = &square;
    square.related_locations.push_back(&closed_chapel);
    square.related_locations.push_back(&tavern);
    square.related_locations.push_back(&forest);
}

GameState::~GameState() {
}