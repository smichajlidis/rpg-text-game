#ifndef _EQUIPMENTMENU_HPP_
#define _EQUIPMENTMENU_HPP_

#include "Menu.hpp"

class EquipmentMenu: public Menu {
public:
    EquipmentMenu() = default;

    ~EquipmentMenu() = default;

    void displayMenu() override;
};

#endif