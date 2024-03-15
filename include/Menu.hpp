#ifndef _MENU_HPP_
#define _MENU_HPP_

#include "../include/HeaderDisplayer.hpp"

class Player;

#include <memory>

class Menu {

public:
    Menu() = default;

    ~Menu() = default;

    void addPlayer(std::shared_ptr<Player> player);
    HeaderDisplayer header_displayer;
    virtual void displayMenu() = 0;

protected:
    std::shared_ptr<Player> player;
};

#endif