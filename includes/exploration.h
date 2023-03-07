#ifndef _EXPLORATION_H_
#define _EXPLORATION_H_
#include <iostream>
#include <vector>

class Exploration {

    std::vector <Creature*> related_creatures;
    std::vector <Item*> related_items;

public:

    void event_draw();
    void found_something();
    void enemy_attack();
    void creature_meeting();
    void nothing_found();

    Exploration();
    ~Exploration();
};

#endif