#include "include/MainMenu.hpp"

#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<MainMenu> main_menu = std::make_shared<MainMenu>();
    main_menu->printMenu();
}