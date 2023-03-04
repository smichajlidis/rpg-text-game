#include <iostream>
#include "../includes/location.h"

void Location::print_location() {
    if (description != "none") {
            std::cout<<description<<"\n\n";
        if (choice_1!="none")
            std::cout<<"1. "<<choice_1<<"\n";
        if (choice_2!="none")
            std::cout<<"2. "<<choice_2<<"\n";
        if (choice_3!="none")
            std::cout<<"3. "<<choice_3<<"\n";
        if (choice_4!="none")
            std::cout<< "4. "<<choice_4<<"\n";
        if (choice_5!="none")
            std::cout<< "5. "<<choice_5<<"\n";
        if (name != "square")
            std::cout<<"0. Return"<<"\n\n";
        else
            std::cout<<"\n";
        std::cout<<"What do you do? ";
    }
}

Location::Location(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val, std::string choice_5_val)
    : name {name_val}, description {description_val}, choice_1 {choice_1_val}, choice_2 {choice_2_val}, choice_3 {choice_3_val}, choice_4 {choice_4_val}, choice_5 {choice_5_val} {
    }

Location::~Location() {
}