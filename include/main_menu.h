#ifndef _MAINMENU_H_
#define _MAINMENU_H_

#include "load.h"

#include <iostream>

class MainMenu {

    Load load;
    int* i_ptr;

public:

    void display_logo();
    void display_menu();
    void clear();
    void get_i_ptr(int* i);
    void change_i();

    MainMenu();
    ~MainMenu();

};

#endif