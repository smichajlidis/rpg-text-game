#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include <string>

class Item {

public:
    Item() = default;

    ~Item() = default;

    std::string getName() const;

private:
    std::string name;
    std::uint32_t value;
};

#endif