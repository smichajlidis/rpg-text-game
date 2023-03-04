#ifndef _CHAPELKEY_H_
#define _CHAPELKEY_H_
#include <iostream>

class ChapelKey: public Item {

public:

    virtual Item* clone();
    virtual void show_details();

    ChapelKey(std::string name_val="CHAPEL KEY");
    ~ChapelKey();
};

#endif