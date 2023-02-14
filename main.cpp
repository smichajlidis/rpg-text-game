#include <iostream>
#include "includes.h"

int main() {

    Item leather {"leather"};
    Item new_object;
    Item object {"object", 20, 12};

    Weapon sword {"sword", 50, 45};
    Weapon bow;

    std::cout << sword.get_name() << std::endl;
    std::cout << sword.get_price() << std::endl;
    std::cout << sword.get_amount() << std::endl;

    std::cout << "Hello World!" << std::endl;

    return 0;
}