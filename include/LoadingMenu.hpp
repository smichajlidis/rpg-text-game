#ifndef _LOADINGMENU_HPP_
#define _LOADINGMENU_HPP_

#include "../include/HeaderDisplayer.hpp"

class LoadingMenu {
public:
    LoadingMenu() = default;
    
    ~LoadingMenu() = default;

    void displayLoadingMenu();

private:
    HeaderDisplayer header_displayer;
};

#endif