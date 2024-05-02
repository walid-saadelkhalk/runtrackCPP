#include <iostream>

int main()
{
    int N;
    int M;

    std::cout << "Entrez un nombre N : ";
    std::cin >> N;
    std::cout << "Entrez un nombre M : ";
    std::cin >> M;

    std::cout << "tapez 1 pour additionner, 2 pour soustraire, 3 pour multiplier, 4 pour diviser : ";
    int choix;
    std::cin >> choix;

    switch (choix)
    {
    case 1:
        std::cout << "N + M = " << N + M << std::endl;
        break;
    case 2:
        std::cout << "N - M = " << N - M << std::endl;
        break;
    case 3:
        std::cout << "N * M = " << N * M << std::endl;
        break;
    case 4:
        if (M == 0)
            std::cout << "Division par 0 impossible" << std::endl;
        else
            std::cout << "N / M = " << N / M << std::endl;
        break;
    }
}