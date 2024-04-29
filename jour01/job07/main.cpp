#include <iostream>

int main() {
    int N;
    
    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;

    if (N % 2 == 0) {
        std::cout << "Le nombre est pair" << std::endl;
    } else {
        std::cout << "Le nombre est impair" << std::endl;
    }
    return 0;
}
