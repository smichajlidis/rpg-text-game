#include "../include/TopBar.hpp"
#include "../include/Player.hpp"

#include <iostream>

void TopBar::displayTopBar() const {
    std::cout << "________________________________________________________________________\n";
    std::cout << "\n      Equipment <6> | Load <7> | Save <8> | Quit Game <9>\n";
    std::cout << "________________________________________________________________________\n";
  //  std::cout<<"------------------------------------------------------------------------\n\n";
    std::cout << "    Hp: " << player->getHP(); //if(drunk>0) std::cout<<" -"<<drunk*2;
    std::cout << " | Gold: " << player->getGold();
    std::cout << " | Strength: " << player->getStrength(); //if(drunk>0) std::cout<<" +"<<drunk; if (active_weapon) std::cout<<" +"<<(*active_weapon).return_value();
    std::cout << " | Charisma: " << player->getCharisma(); //if(drunk>0) std::cout<<" +"<<drunk;
    std::cout << " | Luck: " << player->getLuck(); //if(drunk>0) std::cout<<" +"<<drunk/2;
    // std::cout<< "\n Active weapon: ";
    // if (active_weapon)
    //     std::cout<<(*active_weapon).return_name();
    // else
    //     std::cout<<"none";
    std::cout<<"\n\n\n";
}

void TopBar::pointToPlayer(std::shared_ptr<Player> player_ptr) {
    player = std::move(player_ptr);
}