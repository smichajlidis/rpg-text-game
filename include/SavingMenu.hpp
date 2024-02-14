#ifndef _SAVINGMENU_HPP_
#define _SAVINGMENU_HPP_

#include "../include/HeaderDisplayer.hpp"

class SavingMenu {
public:
    SavingMenu() = default;

    ~SavingMenu() = default;

    void displaySavingMenu();

private:
    HeaderDisplayer header_displayer;
};

#endif