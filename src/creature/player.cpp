#include <iostream>
#include <ctime>
#include "../../include/creature/player.h"
#include "../../include/item.h"

Creature* Player::clone() {
    Creature* player {nullptr};
    player = new Player;
    return player;
}

void Player::increase_charisma(int val) {
    charisma+=val;
    std::cout<<"[charisma +"<<val<<"]\n";
}

bool Player::using_charisma(int favor) {
    srand(time(NULL));
    // add also charisma points from expensive clothes in future
    if (((std::rand() % 80) + charisma + luck + favor - 50) >= 50)
        return true;
    else
        return false;
}

void Player::increase_luck(int val) {
luck+=val;
    std::cout<<"[luck +"<<val<<"]\n";
}

void Player::drinking() {
    drunk+=20;
    std::cout<<"you get.. a bit drunk.\n";
}

void Player::display_top_bar() {
    std::cout<<"________________________________________________________________________\n";
    std::cout<<"\n      Equipment <6> | Load <7> | Save <8> | Quit Game <9>\n";
    std::cout<<"________________________________________________________________________\n\n";
  //  std::cout<<"------------------------------------------------------------------------\n\n";
    std::cout<<" Hp: "<<hp; if(drunk>0) std::cout<<" -"<<drunk*2;
    std::cout<<" | Gold: "<<equipment.return_gold();
    std::cout<<" | Strength: "<<strength; if(drunk>0) std::cout<<" +"<<drunk; if (active_weapon) std::cout<<" +"<<(*active_weapon).return_value();
    std::cout<<" | Charisma: "<<charisma; if(drunk>0) std::cout<<" +"<<drunk;
    std::cout<<" | Luck: "<<luck; if(drunk>0) std::cout<<" +"<<drunk/2;
    std::cout<<"\n Active weapon: ";
    if (active_weapon)
        std::cout<<(*active_weapon).return_name();
    else
        std::cout<<"none";
    std::cout<<"\n\n\n";

}

int Player::return_drunk() {
    return drunk;
}

bool Player::is_chapel_key() {
    while(equipment.is_chapel_key()) {
        return true;
    }
    return false;
}


Player::Player(std::string name_val, int strength_val, int charisma_val, int luck_val, int drunk_val)
    : Creature(name_val, strength_val), charisma {charisma_val}, luck {luck_val}, drunk {drunk_val} {
        equipment.add_gold(1500);
    }

Player::~Player() {
}