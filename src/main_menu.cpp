#include <iostream>
#include "../includes/main_menu.h"

void MainMenu::display_logo() {
    std::cout<<"_________________________\n";
    std::cout<<"|..::SUPER LEGS 2000::..|\n";
    std::cout<<" '^'''^'''^'''^'''^'''^'\n\n";
}

void MainMenu::display_menu() {
    char choice {};
    do {
    clear();
    display_logo();
    std::cout<<"      1. New Game\n";
    std::cout<<"        2. Load\n";
    std::cout<<"      0. Quit Game\n\n";
    std::cout<<"What do you want to do? ";
    std::cin>>choice;
    switch(choice) {
        case '1': break;
        case '2': clear(); display_logo(); load.display_load(); break;
        default: break;
    }
    } while (choice == '2');
}

void MainMenu::clear() {
    #if defined _WIN32
        system("cls");
        //clrscr(); // including header file : conio.h
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
        //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
    #elif defined (__APPLE__)
        system("clear");
    #endif
}

MainMenu::MainMenu() {
}

MainMenu::~MainMenu() {
}