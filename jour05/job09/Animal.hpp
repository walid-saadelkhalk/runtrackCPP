#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
public:
    Animal();
    virtual ~Animal();

    virtual void crier() const = 0;
    virtual void manger() const = 0;

    static int getTotalAnimaux();

protected:
    static int totalAnimaux;
};

#endif
