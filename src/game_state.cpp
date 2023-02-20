#include <iostream>
#include "../includes/game_state.h"

void GameState::display_location() {
    (*current_location).print_location();
    current_location->making_a_choice();
}

GameState::GameState() {
    current_location = &square;
}

GameState::~GameState() {
}