#include "Chat.hpp"
#include <iostream>
#include <string>

Chat::Chat() : Animal() {}

void Chat::crier() const {
    std::cout << "Miaou!" << std::endl;
}

void Chat::manger(const std::string& aliment) const {
    std::cout << "Le chat mange " << aliment << "." << std::endl;
}
