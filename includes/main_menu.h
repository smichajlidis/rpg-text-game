#ifndef _MAINMENU_H_
#define _MAINMENU_H_
#include <iostream>

class Load;

class MainMenu {

    Load load;

public:

    void display_logo();
    void display_menu();
    void clear();

    MainMenu();
    ~MainMenu();

};

#endif