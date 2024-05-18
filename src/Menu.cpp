#include "../include/Menu.hpp"

#include <iostream>
#include <cstdint>
#include <algorithm>

Menu::Menu(const std::string& title, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3, const std::string& choice_4, const std::string& choice_5) {
    descriptions.push_back(title);
    descriptions.push_back(choice_1);
    descriptions.push_back(choice_2);
    descriptions.push_back(choice_3);
    descriptions.push_back(choice_4);
    descriptions.push_back(choice_5);
}

void Menu::addPlayer(std::shared_ptr<Player> val) {
    player = std::move(val);
}

void Menu::printMenu() {
    printTitle();
    std::cout << "\n\n";
    printChoices();
}

void Menu::printTitle() const {
    if (descriptions.at(0) != "") {
        std::cout << descriptions.at(0);
    }
}

void Menu::printChoices() const {
    std::uint32_t count {1};
    std::for_each(descriptions.begin() + 1, descriptions.end(), [&count](const std::string& choice) { 
        if (!choice.empty()) {
            std::cout << count << ". " << choice << std::endl;
            ++count;
        }
    });
    std::cout<<"\nWhat do you do? ";
}