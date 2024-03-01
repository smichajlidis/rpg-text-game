#include "../include/TopBar.hpp"
#include "../include/Player.hpp"

#include <iostream>

void TopBar::displayTopBar() const {
    std::cout << "________________________________________________________________________\n";
    std::cout << "\n      Equipment <6> | Load <7> | Save <8> | Quit Game <9>\n";
    std::cout << "________________________________________________________________________\n";

    std::cout << "    Hp: " << player->getHP(); 
    std::cout << " | Gold: " << player->getGold();
    std::cout << " | Strength: " << player->getStrength();
    std::cout << " | Charisma: " << player->getCharisma(); 
    std::cout<<"\n\n\n";
}

void TopBar::pointToPlayer(std::shared_ptr<Player> player_ptr) {
    player = std::move(player_ptr);
}