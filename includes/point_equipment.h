#ifndef _POINT_EQUIPMENT_H_
#define _POINT_EQUIPMENT_H_
#include <iostream>

class PointEquipment {

    Equipment* equipment_ptr;

public:

    void point_equipment(Equipment*);

    PointEquipment();
    ~PointEquipment();


};

#endif