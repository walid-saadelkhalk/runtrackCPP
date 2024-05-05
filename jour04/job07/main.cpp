#include <iostream>

int main(){
    
    int tableau[5] = {1, 2, 3, 4, 5};
    int *ptr_valueOne = &tableau[0];
    int *ptr_valueTwo = &tableau[1];
    int *ptr_valueThree = &tableau[2];
    int *ptr_valueFour = &tableau[3];
    int *ptr_valueFive = &tableau[4];

    std::cout << "premiere valeur : " << *ptr_valueOne << std::endl;
    std::cout << "adresse de la premiere valeur : " << ptr_valueOne << std::endl;

    std::cout << "deuxieme valeur : " << *ptr_valueTwo << std::endl;
    std::cout << "adresse de la deuxieme valeur : " << ptr_valueTwo << std::endl;   
    
    std::cout << "troisieme valeur : " << *ptr_valueThree << std::endl;
    std::cout << "adresse de la troisieme valeur : " << ptr_valueThree << std::endl;

    std::cout << "quatrieme valeur : " << *ptr_valueFour << std::endl;
    std::cout << "adresse de la quatrieme valeur : " << ptr_valueFour << std::endl;

    std::cout << "cinquieme valeur : " << *ptr_valueFive << std::endl;
    std::cout << "adresse de la cinquieme valeur : " << ptr_valueFive << std::endl;
}