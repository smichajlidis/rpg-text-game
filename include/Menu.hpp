#ifndef _MENU_HPP_
#define _MENU_HPP_

#include "../include/HeaderDisplayer.hpp"

class Player;

#include <memory>
#include <vector>
#include <string>
#include <cstdint>

class Menu {

public:
    Menu(const std::string& title = "", const std::string& choice_1 = "", const std::string& choice_2 = "", const std::string& choice_3 = "", const std::string&choice_4 = "", const std::string& choice_5 = "");

    ~Menu() = default;

    void addPlayer(std::shared_ptr<Player> player);
    HeaderDisplayer header_displayer;
    virtual void printMenu();
    virtual void printChoices() const;
    virtual void printTitle() const;
    virtual void action(const std::string&, std::uint32_t) const = 0;

protected:
    std::vector<std::string> descriptions;
    std::shared_ptr<Player> player;
};

#endif