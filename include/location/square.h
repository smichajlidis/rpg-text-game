#ifndef _SQUARE_H_
#define _SQUARE_H_

class Chapel;
class Forest;
class Tavern;

#include "../location.h"

class Square: public Location {

public:

    virtual Location* making_a_choice();

    Square();
    ~Square();

};

#endif