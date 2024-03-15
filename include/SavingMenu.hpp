#ifndef _SAVINGMENU_HPP_
#define _SAVINGMENU_HPP_

#include "../include/Menu.hpp"

class SavingMenu: public Menu {
public:
    SavingMenu() = default;

    ~SavingMenu() = default;

    void displayMenu() override;
};

#endif