#ifndef _POINT_PLAYER_H_
#define _POINT_PLAYER_H_

class Player;
class HotDish;

class PointPlayer {

    Player* player_ptr;

public:

    void point_player(Player*);

    PointPlayer();
    ~PointPlayer();

    friend class HotDish;
    friend class Gamblers;
    friend class Priest;
    friend class Ladies;

};

#endif