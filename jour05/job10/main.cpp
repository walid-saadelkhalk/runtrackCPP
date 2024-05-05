#include "Chien.hpp"
#include "Chat.hpp"
#include <iostream>

int main() {
    Chien chien1, chien2, chien3;
    Chat chat1, chat2, chat3;

    std::cout << "Nombre total d'animaux : " << Animal::getTotalAnimaux() << std::endl;

    chat1.manger("des croquettes");
    chat2.manger("du poisson");
    chien1.manger("variee");
    chien2.manger("variee");
    chien3.manger("variee");

    std::cout << "Nombre total d'animaux : " << Animal::getTotalAnimaux() << std::endl;

    return 0;
}
