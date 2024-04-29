#include <iostream>

int main() {
    int N;
    int M = 0;

    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;

    while (N!=0)
    {
        int temp = N % 10;
        M = M * 10 + temp;
        N = N / 10;
    }

    std::cout << "Le nombre inversé est : " << M << std::endl;
    
}

