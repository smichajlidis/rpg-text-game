#ifndef _LIVINGBEING_HPP_
#define _LIVINGBEING_HPP_

#include "Item.hpp"

#include <vector>
#include <memory>
#include <unordered_map>

class LivingBeing {

public:
    LivingBeing(std::uint16_t strength = 5, const std::string& name = "", std::uint16_t hp = 100)
        : name(name), hp(hp), strength(strength) {}

    ~LivingBeing() = default;

    std::uint16_t getStrength();
    void increaseStrength(std::uint32_t);
    std::uint16_t getHP() const;
    void increaseHP(std::uint16_t);
    void decreaseHP(std::uint16_t);
    virtual void printEquipment() const;
    std::uint16_t getEquipmentSize() const;
    void addItem(const Item& item);
    void deleteItem(const std::string& val);
    Item moveItem(const std::string& val);
    std::uint32_t getGold() const;
    void decreaseGold(std::uint32_t);
    void increaseGold(std::uint32_t);
    std::string getName() const;
    Item getItemFromEquipment(std::uint32_t);
    bool findItemInEquipment(const std::string&) const;
    void useItem(const std::string&);

protected:
    std::string name;
    std::uint16_t hp;
    std::uint16_t strength;
    std::vector<Item> equipment;
    std::string active_weapon;
    std::unordered_map<std::string, std::string> active_items;
    std::uint32_t gold;
};

#endif