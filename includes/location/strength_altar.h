#ifndef _STRENGTHALTAR_H_
#define _STRENGTHALTAR_H_

class StrengthAltar: public Location {

public:

    virtual Location* making_a_choice();

    StrengthAltar(std::string name_val="strength_altar");
    ~StrengthAltar();

};

#endif