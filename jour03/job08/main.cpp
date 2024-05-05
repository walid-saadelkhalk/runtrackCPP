#include <iostream>

int main(){

const int tab = 11;
char lettres[tab];

    std::cout << "Entrez 10 lettres : ";
    for (int i = 0; i < tab; ++i) {
        std::cout << "Entrez une lettre: ";
        std::cin >> lettres[i];
    }

    for (int i = 0; i < tab; ++i) {
        std::cout << lettres[i] << " ";
    }
    lettres[tab - 1] = '\0';
    std::cout << "Les lettres que vous avez entrees sont : " << lettres << std::endl;
    return 0;
}
