#ifndef _CHARISMAALTAR_H_
#define _CHARISMAALTAR_H_

class CharismaAltar: public Location {

public:

    virtual Location* making_a_choice();

    CharismaAltar(std::string name_val="charisma_altar");
    ~CharismaAltar();

};

#endif