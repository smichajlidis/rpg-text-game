#ifndef _EXITINGMENU_HPP_
#define _EXITINGMENU_HPP_

#include "Menu.hpp"

class ExitingMenu: public Menu {
public:
    ExitingMenu() = default;
    
    ~ExitingMenu() = default;

    void printMenu() override;
    void action(const std::string&, std::uint32_t) const override;
};

#endif