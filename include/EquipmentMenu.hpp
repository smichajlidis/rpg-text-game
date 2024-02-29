#ifndef _EQUIPMENTMENU_HPP_
#define _EQUIPMENTMENU_HPP_

#include "../include/HeaderDisplayer.hpp"

class EquipmentMenu {
public:
    EquipmentMenu() = default;

    ~EquipmentMenu() = default;

    void displayEquipmentMenu();

private:
    HeaderDisplayer header_displayer;
};

#endif