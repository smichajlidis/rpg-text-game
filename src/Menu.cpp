#include "../include/Menu.hpp"

void Menu::addPlayer(std::shared_ptr<Player> val) {
    player = std::move(val);
}