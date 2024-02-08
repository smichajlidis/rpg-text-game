#ifndef _WEAPONALTAR_H_
#define _WEAPONALTAR_H_

#include "../location.h"

class WeaponAltar: public Location {

public:

    virtual Location* making_a_choice();

    WeaponAltar(std::string name_val="weapon_altar");
    ~WeaponAltar();

};

#endif