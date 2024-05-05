#include <iostream>

main(){
    int numberOne = 2019;
    int numberTwo = 42;
    int numberThree = 21;
    int *ptrOne = &numberOne;
    int *ptrTwo = &numberTwo;
    int *ptrThree = &numberThree;

    std::cout << "numberOne: " << *ptrOne << std::endl;
    std::cout << "numberTwo: " << *ptrTwo << std::endl;
    std::cout << "numberThree: " << *ptrThree << std::endl;

    *ptrOne = 1984;
    *ptrTwo = 24;
    *ptrThree = 12;

    std::cout << "New numberOne: " << *ptrOne << std::endl;
    std::cout << "New numberTwo: " << *ptrTwo << std::endl;
    std::cout << "New numberThree: " << *ptrThree << std::endl;
    return 0;
}
