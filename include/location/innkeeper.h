#ifndef _INNKEEPER_H_
#define _INNKEEPER_H_

#include "../Location.hpp"

class Innkeeper: public Location {

public:


    Innkeeper(std::string description_val = "- Hello stranger, what do you wish?", std::string choice_1_val = "Ask for a beer", std::string choice_2_val = "Trade", std::string choice_3_val = "Ask for a gossip", std::string choice_4_val = "Order something to eat");
    ~Innkeeper();

};

#endif