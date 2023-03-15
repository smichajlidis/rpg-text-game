#ifndef _LUCKALTAR_H_
#define _LUCKALTAR_H_

class LuckAltar: public Location {

public:

    virtual Location* making_a_choice();

    LuckAltar(std::string name_val="luck_altar");
    ~LuckAltar();

};

#endif