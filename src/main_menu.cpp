#include <iostream>
#include "../include/main_menu.h"

void MainMenu::display_logo() {
    std::cout<<"_________________________\n";
    std::cout<<"|..::SUPER LEGS 2000::..|\n";
    std::cout<<" '^'''^'''^'''^'''^'''^'\n\n";
}

void MainMenu::display_menu() {
    do {
        screen_stuff.clear();
        display_logo();
        
        std::cout<<"      1. New Game\n";
        std::cout<<"        2. Load\n";
        std::cout<<"      0. Quit Game\n\n";
        std::cout<<"What do you want to do? ";
        std::cin>>*i_ptr;

        switch(*i_ptr) {
            case 1:
                break;
            case 2:
                screen_stuff.clear();
                display_logo();
                load.display_load();
                break;
            case 0:
                change_i();
                break;
            default:
                break;
        }
    } while(*i_ptr == 2);
}

void MainMenu::change_i() {
    *i_ptr = 0;
}

void MainMenu::get_i_ptr(int* i) {
    i_ptr = i;
}