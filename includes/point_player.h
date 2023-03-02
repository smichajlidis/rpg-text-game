#ifndef _POINT_PLAYER_H_
#define _POINT_PLAYER_H_
#include <iostream>

class Player;
class HotDish;

class PointPlayer {

    Player* player_ptr;

public:

    void point_player(Player*);

    PointPlayer();
    ~PointPlayer();

    friend class HotDish;

};

#endif