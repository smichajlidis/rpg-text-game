#include "../../include/location/Priest.hpp"

Priest::Priest(const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
        : NPC(description, choice_1, choice_2, choice_3) {
        greetings.push_back("He is a wise man who invented beer");
        greetings.push_back("Milk is for babies. When you grow up you have to drink beer");
        greetings.push_back("Life is too short to drink cheap beer");
        greetings.push_back("What care I how time advances, I'm drinking all today");
        greetings.push_back("Good people drink good beer");
        greetings.push_back("I work until beer o’clock");
        greetings.push_back("Beer makes you feel the way you ought to feel without beer");
        greetings.push_back("I am not addicted to beer… It’s addicted to me");
        greetings.push_back("Everybody needs to believe in something. I believe I’ll have another beer");
        greetings.push_back("Beer… now there’s a temporary solution!");
        greetings.push_back("Beer. The best damn drink in the world!");
        greetings.push_back("Beer is proof that God loves us and wants us to be happy");
        greetings.push_back("The mouth of a perfectly happy man is filled with beer");
        greetings.push_back("Fermentation may have been a greater discovery than fire");
        greetings.push_back("He who drinks beer sleeps well. he who sleeps well cannot sin. He who does not sin goes to heaven. Amen");
        greetings.push_back("Let no man thirst for good beer");
        greetings.push_back("On victory, you deserve beer, in defeat, you need it");
}