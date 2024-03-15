#include "../include/Menu.hpp"

void Menu::addPlayer(std::shared_ptr<Player> player) {
    player = std::move(player);
}