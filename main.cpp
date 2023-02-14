#include <iostream>

#include "includes/item.h"
#include "src/item.cpp"

int main() {

    Item leather {"leather"};
    Item new_object;
    Item object {"object", 20, 12};

    std::cout << "Hello World!" << std::endl;

    return 0;
}