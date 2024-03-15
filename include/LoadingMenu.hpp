#ifndef _LOADINGMENU_HPP_
#define _LOADINGMENU_HPP_

#include "Menu.hpp"

class LoadingMenu: public Menu {
public:
    LoadingMenu() = default;
    
    ~LoadingMenu() = default;

    void displayMenu() override;
};

#endif