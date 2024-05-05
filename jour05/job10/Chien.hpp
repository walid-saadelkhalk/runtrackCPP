#ifndef CHIEN_HPP
#define CHIEN_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Chien : public Animal {
public:
    Chien();
    void crier() const override;
    void manger(const std::string& aliment) const override;
};

#endif
