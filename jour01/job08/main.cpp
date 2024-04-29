#include <iostream>

int main() {
    int N;

    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;

    if (N % 4 == 0) {
        std::cout << N << " est une année bissextile" << std::endl;
    } else {
        std::cout << N << " n'est pas une année bissextile" << std::endl;
    }
    return 0;
}