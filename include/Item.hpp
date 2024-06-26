#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include <string>
#include <cstdint>

class Item {

public:
    Item(const std::string& name = "", std::uint32_t value = 5, const std::string& type = "", std::uint32_t strength = 0)
        : name(name), value(value), type(type), strength(strength) {}

    ~Item() = default;

    friend std::ostream& operator<<(std::ostream& os, const Item& rhs);

    std::string getName() const;
    bool empty() const;
    std::string getType() const;
    std::uint16_t getStrength() const;
    std::uint32_t getAmount() const;
    void increaseAmount(std::uint32_t);
    void decreaseAmount(std::uint32_t);
    void setAmountAsOne();
    std::uint32_t getValue() const;

private:
    std::string name;
    std::uint32_t amount = 1;
    std::uint32_t value;
    std::string type;
    std::uint32_t strength;
};

#endif