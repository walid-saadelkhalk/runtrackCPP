#include <iostream>

int main() {
    int a;
    int b;
    int entier;

    std::cout << "Entrez la borne inferieure a : ";
    std::cin >> a;

    std::cout << "Entrez la borne superieure b : ";
    std::cin >> b;

    if (a >= b) {
        std::cout << "Erreur : La borne inferieure a doit être strictement inférieure à la borne superieure b." << std::endl;
        return 1; 
    }
    std::cout << "Entrez un entier : ";
    std::cin >> entier;
    if (entier >= a && entier <= b) {
        std::cout << "GAGNE" << std::endl;
    } else {
        std::cout << "PERDU" << std::endl;
    }

    return 0;
}
