#include <iostream>
#include "../include/load.h"

void Load::display_load() {
    char choice {};
    std::cout<<"Here you will can load your saves\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}

Load::Load() {
}

Load::~Load() {
}