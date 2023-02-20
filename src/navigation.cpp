#include <iostream>
#include "../includes/navigation.h"
#include "../includes/game_state.h"

Navigation::Navigation(GameState game_state) {
    ptr = &game_state.square;
}

Navigation::~Navigation() {
}
