#ifndef _HOT_DISH_H_
#define _HOT_DISH_H_

class HotDish: public Location, public PointPlayer, public PointEquipment {

    public:

    virtual Location* making_a_choice();

    HotDish(std::string name_val = "hot_dish");
    ~HotDish();
};

#endif