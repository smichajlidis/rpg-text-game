#include "../../include/location/Ladies.hpp"

Ladies::Ladies(const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : NPC(description, choice_1, choice_2, choice_3) {
    greetings.push_back("Guess what We are not wearing right now?");
    greetings.push_back("Olive juice. Say it fast");
    greetings.push_back("Hey, stranger! Wait, why are we still strangers? Let's fix that...");
    greetings.push_back("We have a secret to tell you, but we want to tell you in person");
    greetings.push_back("We hate everyone. But not you");
    greetings.push_back("We are addicted to you, and we need another hit");
    greetings.push_back("Want to make a beautiful memory together?");
    greetings.push_back("You were in our dreams last night. Wanna hear?");
    greetings.push_back("You're already thinking about us - we can feel it");
    greetings.push_back("We can't focus today. We are too distracted thinking about you");
    greetings.push_back("Our love language is physical touch. Want a present?");
    greetings.push_back("You are our dream man, baby");
    greetings.push_back("We need you right now");
}