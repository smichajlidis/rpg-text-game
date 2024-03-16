#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include <string>

class Item {

public:
    Item(const std::string& name = "", std::uint32_t value = 0)
        : name(name), value(value) {}

    ~Item() = default;

    std::string getName() const;
    bool empty() const;

private:
    std::string name;
    std::uint32_t value;
};

#endif