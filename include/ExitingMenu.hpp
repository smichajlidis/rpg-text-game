#ifndef _EXITINGMENU_HPP_
#define _EXITINGMENU_HPP_

#include "../include/HeaderDisplayer.hpp"

class ExitingMenu {
public:
    ExitingMenu() = default;
    
    ~ExitingMenu() = default;

    void displayExitingMenu();

private:
    HeaderDisplayer header_displayer;
};

#endif