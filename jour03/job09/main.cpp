#include <iostream>
#include <string>

bool incluse(std::string chaine1, std::string chaine2) {
    // Rechercher chaine1 dans chaine2
    size_t found = chaine2.find(chaine1);
    // Si la chaine1 est trouvée dans chaine2, found contiendra la position de chaine1 dans chaine2
    return (found != std::string::npos);
}

int main() {
    std::string phrase1;
    std::string phrase2;

    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, phrase1);

    std::cout << "Entrez une autre phrase : ";
    std::getline(std::cin, phrase2);

    if (incluse(phrase1, phrase2)) {
        std::cout << "La premiere phrase est incluse dans la deuxieme." << std::endl;
    } else {
        std::cout << "La premiere phrase n'est pas incluse dans la deuxieme." << std::endl;
    }

    return 0;
}
