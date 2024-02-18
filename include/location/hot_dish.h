#ifndef _HOT_DISH_H_
#define _HOT_DISH_H_

#include "../location.h"
#include "../point_player.h"

class HotDish: public Location, public PointPlayer {

    public:

    HotDish();
    ~HotDish();
};

#endif