#ifndef _ASKINGABOUTCHAPEL_HPP_
#define _ASKINGABOUTCHAPEL_HPP_

#include "../Location.hpp"

class AskingAboutChapel: public Location {

public:
    AskingAboutChapel(const std::string& description = "Not your business young man",
        const std::string& choice_1 = "Return")
        : Location(description, choice_1) {}

    ~AskingAboutChapel() = default;
};

#endif