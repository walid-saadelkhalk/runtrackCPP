#include <iostream>

int main() {
    int N;
    int M;

    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;
    std::cout << "Entrez la valeur de M : ";
    std::cin >> M;


    std::cout << "Avant l'echange : N = " << N << ", M = " << M << std::endl;
    int temp = N;
    N = M;
    M = temp;
    
    std::cout << "Apres l'echange : N = " << N << ", M = " << M << std::endl;

    return 0;
}
