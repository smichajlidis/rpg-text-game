#ifndef _EQUIPMENTMENU_HPP_
#define _EQUIPMENTMENU_HPP_

#include "Menu.hpp"

class EquipmentMenu: public Menu {
public:
    EquipmentMenu() = default;

    ~EquipmentMenu() = default;

    void printMenu() override;
    void action(std::uint32_t) const override;
};

#endif