#ifndef _LOADINGMENU_HPP_
#define _LOADINGMENU_HPP_

#include "Menu.hpp"

class LoadingMenu: public Menu {
public:
    LoadingMenu() = default;
    
    ~LoadingMenu() = default;

    void printMenu() override;
    void action(const std::string&, std::uint32_t) const override;
};

#endif