#include <iostream>

int main()
{
    int a;
    int b;

    std::cout << "Entrez un nombre : ";
    std::cin >> a;
    std::cout << "Entrez un autre nombre : ";
    std::cin >> b;

    if (a > b) {
        std::cout << "Erreur : La borne inferieure a doit être inférieure ou égale à la borne superieure b." << std::endl;
        return 1;
    }
    std::cout << "Les entiers de " << a << " a " << b << " sont : ";
    int i = a;
    while (i <= b) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;
    return 0;
}