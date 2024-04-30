#include <iostream>

int main()
{
    int N;
    int M;
    std::cout << "Entrez le prix HT de carottes : ";
    std::cin >> N;
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> M;

    float price = N * M;
    float tax = price * 0.196;
    float finalPrice = price + tax;

    std::cout << "Le prix TTC est de : " << finalPrice << std::endl;
    }