#ifndef _MAINMENU_H_
#define _MAINMENU_H_

#include "load.h"
#include "screen_stuff.h"

class MainMenu {
public:
    MainMenu() = default;

    ~MainMenu() = default;

    void display_logo();
    void display_menu();
    void get_i_ptr(int* i);
    void change_i();

private:
    Load load;
    ScreenStuff screen_stuff;
    int* i_ptr;

};

#endif