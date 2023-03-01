#ifndef _HOT_DISH_H_
#define _HOT_DISH_H_

class Player;

class HotDish: public Location {

    Player* player;

    public:

    void point_player(Player*);
    virtual Location* making_a_choice();

    HotDish(std::string name_val = "hot_dish");
    ~HotDish();
};

#endif