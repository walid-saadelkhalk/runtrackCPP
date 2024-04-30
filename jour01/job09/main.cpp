#include <iostream>

int main() {
    int N;
    int M;
    int P;

    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;
    std::cout << "Entrez la valeur de M : ";
    std::cin >> M;
    std::cout << "Entrez la valeur de P : ";
    std::cin >> P;

    int bigNumber = N;
    if (M > bigNumber) {
        bigNumber = M;
    }
    if (P > bigNumber) {
        bigNumber = P;
    }

    std::cout << "Le plus grand nombre est : " << bigNumber << std::endl;    
}