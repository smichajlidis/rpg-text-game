#ifndef _EQUIPMENTMENU_HPP_
#define _EQUIPMENTMENU_HPP_

#include "ScreenStuff.hpp"
#include "Menu.hpp"

class EquipmentMenu: public Menu {
public:
    EquipmentMenu(const std::string& title = "", const std::string& choice_1 = "Use", const std::string& choice_2 = "Drop", const std::string& choice_3 = "Return")
    : Menu(title, choice_1, choice_2, choice_3) {}

    ~EquipmentMenu() = default;

    void printMenu() override;
    void action(const std::string&, std::uint32_t) const override;

private:
    ScreenStuff screen_stuff;
};

#endif