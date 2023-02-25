#include <iostream>
#include "../../includes/creature/player.h"

void Player::drinking(int drunk_val) {
    drunk+=20;
    std::cout<<"You are.. a bit drunk.\n";
}

void Player::display_top_bar() {
    std::cout<<"________________________________________________________________________\n";
    std::cout<<"\n      Equipment <6> | Load <7> | Save <8> | Quit Game <9>\n";
    std::cout<<"________________________________________________________________________\n\n";
  //  std::cout<<"------------------------------------------------------------------------\n\n";
    std::cout<<" Hp: "<<hp; if(drunk>0) std::cout<<" -"<<drunk*2;
    std::cout<<" | Gold: "<<equipment.return_gold();
    std::cout<<" | Strength: "<<strength; if(drunk>0) std::cout<<" +"<<drunk;
    std::cout<<" | Charisma: "<<charisma; if(drunk>0) std::cout<<" +"<<drunk;
    std::cout<<" | Luck: "<<luck; if(drunk>0) std::cout<<" +"<<drunk/2;
    std::cout<<"\n\n\n";

}

Player::Player(std::string name_val, int strength_val, int charisma_val, int luck_val, int hp_val, int drunk_val)
    : Creature(name_val, strength_val, hp_val), charisma {charisma_val}, luck {luck_val}, drunk {drunk_val} {
        equipment.add_gold(150);
    }

Player::~Player() {
}