#include "Chien.hpp"
#include <iostream>

Chien::Chien() : Animal() {}

void Chien::crier() const {
    std::cout << "Woof!" << std::endl;
}

void Chien::manger(const std::string& aliment) const {
    std::cout << "Le chien a une alimentation " << aliment << "." << std::endl;
}
