#ifndef _GOLDALTAR_H_
#define _GOLDALTAR_H_

class GoldAltar: public Location {

public:

    virtual Location* making_a_choice();

    GoldAltar(std::string name_val="gold_altar");
    ~GoldAltar();

};

#endif