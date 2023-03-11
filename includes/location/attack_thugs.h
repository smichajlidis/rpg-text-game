#ifndef _ATTACKTHUGS_H_
#define _ATTACKTHUGS_H_

class AttackThugs: public Location {

public:

    virtual Location* making_a_choice();

    AttackThugs(std::string name_val = "attack_thugs");
    ~AttackThugs();

};

#endif