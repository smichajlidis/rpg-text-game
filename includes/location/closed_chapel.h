#ifndef _CLOSEDCHAPEL_H_
#define _CLOSEDCHAPEL_H_
#include <iostream>

class ClosedChapel: public Location {

public:

    ClosedChapel(std::string name_val = "closed_chapel", std::string description_val = "The door is closed. Nothing to do.");
    ~ClosedChapel();

};

#endif