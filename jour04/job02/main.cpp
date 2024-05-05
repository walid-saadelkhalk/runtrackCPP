#include <iostream>

int main(){
    int numberOne = 2019;
    int numberTwo = 42;
    int *ptrOne = &numberTwo;
    int *ptrTwo = &numberOne;

    std::cout << "La valeur de numberOne est : " << numberOne << std::endl;
    std::cout << "La valeur de numberTwo est : " << numberTwo << std::endl;
    std::cout << "La nouvelle valeur de numberOne est : " << *ptrOne << std::endl;
    std::cout << "La nouvelle valeur de numberTwo est : " << *ptrTwo << std::endl;
}