#include <iostream>
#include <cstdlib>
#include "includes.h"

//void clear();

int main() {

GameState game_state;
ScreenStuff screen_stuff;

int i {1};

do {
  screen_stuff.clear();
  game_state.display_location();
  } while (i == 1);

  return 0;
}

//void clear() {
//#if defined _WIN32
//    system("cls");
//    //clrscr(); // including header file : conio.h
//#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
//    system("clear");
//    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
//#elif defined (__APPLE__)
//    system("clear");
//#endif
//}