#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include <string>

class Item {

public:
    Item(const std::string& name = "", std::uint32_t strength = 0)
        : name(name), strength(strength) {}

    ~Item() = default;

    std::string getName() const;
    bool empty() const;
    std::uint16_t getStrength() const;

private:
    std::string name;
    std::uint32_t strength;
};

#endif