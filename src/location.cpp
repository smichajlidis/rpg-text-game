#include <iostream>
#include "../includes/location.h"

void Location::display_location() {
    std::cout<<description<<"\n\n";
    if (answer_1!="none")
        std::cout<<"1. "<<answer_1<<"\n";
    if (answer_2!="none")
        std::cout<<"2. "<<answer_2<<"\n";
    if (answer_3!="none")
        std::cout<<"3. "<<answer_3<<"\n";
    if (answer_4!="none")
        std::cout<< "4. "<<answer_4<<"\n";
    if (answer_5!="none")
        std::cout<< "5. "<<answer_5<<"\n";
    std::cout<<"0. Return"<<"\n\n";
    std::cout<<"What do you do? ";
}

Location::Location(std::string name_val, std::string description_val, std::string answer_1_val, std::string answer_2_val, std::string answer_3_val, std::string answer_4_val, std::string answer_5_val)
    : name {name_val}, description {description_val}, answer_1 {answer_1_val}, answer_2 {answer_2_val}, answer_3 {answer_3_val}, answer_4 {answer_4_val}, answer_5 {answer_5_val} {
    }

Location::~Location() {
}