#include <iostream>

int main() {
    int N;
    int somme = 0;

    std::cout << "Entrez un nombre : ";
    std::cin >> N;

    for (int i = 5; i <= N; ++i) {
        somme += i * i * i;
    }
    std::cout << "La somme des cubes de 5^3 a N^3 est : " << somme << std::endl;

    return 0;
}
