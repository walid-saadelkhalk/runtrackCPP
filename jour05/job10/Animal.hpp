#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
public:
    Animal();
    virtual ~Animal();

    virtual void crier() const = 0;
    virtual void manger(const std::string& aliment) const = 0;


    static int getTotalAnimaux();

protected:
    static int totalAnimaux;
};

#endif
