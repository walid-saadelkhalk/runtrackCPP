#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> size;

    std::vector<int> array(size);

    std::cout << "Entrez les entiers :" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    std::cout << "Contenu du tableau :" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}