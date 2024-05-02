#include <iostream>

int main()
{
    int note;
    std::cout << "Entrez votre note: ";
    std::cin >> note;

    if (note < 10 && note >= 0)
        std::cout << "non valide" << std::endl;
    else if (note >= 10 && note <= 20)
        std::cout << "valide" << std::endl;
    else if (note < 0)
        std::cout << "rentez une note comprise entre 0 et 20" << std::endl;
    else if (note > 20)
        std::cout << "rentez une note comprise entre 0 et 20" << std::endl;
    return 0;
}