#ifndef CHAT_HPP
#define CHAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Chat : public Animal {
public:
    Chat();
    void crier() const override;
    void manger(const std::string& aliment) const override;
};

#endif
