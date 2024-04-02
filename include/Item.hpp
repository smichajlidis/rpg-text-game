#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include <string>

class Item {

public:
    Item(const std::string& name = "", std::uint32_t value = 5, std::uint32_t strength = 0)
        : name(name), value(value), strength(strength) {}

    ~Item() = default;

    friend std::ostream& operator<<(std::ostream& os, const Item& rhs);

    std::string getName() const;
    bool empty() const;
    std::uint16_t getStrength() const;

private:
    std::string name;
    std::uint32_t value;
    std::uint32_t strength;
};

#endif