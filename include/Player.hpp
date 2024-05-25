#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "LivingBeing.hpp"
#include "Item.hpp"

class Player: public LivingBeing {

public:
    Player() { gold = 10000; hp = 100; luck = 1; strength = 25, charisma = 1; being_drunk = 0; win = false; 
        active_items["weapon"] = Item("sword", 15, "weapon", 40);}

    ~Player() = default;

    std::uint16_t getCharisma() const;
    std::uint16_t getLuck() const;
    std::uint16_t getBeingDrunk() const;
    void updateAfterEachRound();
    void increaseBeingDrunk(std::uint16_t);
    void increaseLuck(std::uint16_t);
    void increaseCharisma(std::uint16_t);
    void setCurrentEnemy(std::shared_ptr<LivingBeing>);
    std::string getCurrentEnemyName() const;
    std::string getCurrentEnemyNameUppercase() const;
    std::uint16_t getCurrentEnemyHP() const;
    std::uint16_t getCurrentEnemyStrength() const;
    void decreaseCurrentEnemyHP(std::uint16_t);
    void deleteCurrentEnemy();
    void getItemsFromCurrentEnemy();
    void printCurrentEnemyEquipment() const;
    void setWin();
    bool getWin() const;
    void setWhereIsPlayer(const std::string&);
    std::string getWhereIsPlayer() const;

private:
    std::uint16_t charisma;
    std::uint16_t luck;
    std::uint16_t being_drunk;
    std::shared_ptr<LivingBeing> current_enemy;
    bool win;
    std::string where_is_player;
};

#endif