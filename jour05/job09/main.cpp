#include "Chien.hpp"
#include "Chat.hpp"
#include <iostream>

int main() {
    Chien chien1, chien2, chien3;
    Chat chat1, chat2, chat3;

    std::cout << "Nombre total d'animaux : " << Animal::getTotalAnimaux() << std::endl;

    return 0;
}
