#include <iostream>
#include <cstdlib> 
#include <ctime> 

int main() {
    srand(time(nullptr)); 

    int nombreMystere = rand() % 101;
    int tentative;
    int nombreTentatives = 0;

    std::cout << "Devinez un nombre entre 0 et 100." << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << "Tentative " << i + 1 << " : ";
        std::cin >> tentative;
        nombreTentatives++;

        if (tentative < nombreMystere) {
            std::cout << "Le nombre mystere est plus grand !" << std::endl;
        } else if (tentative > nombreMystere) {
            std::cout << "Le nombre mystere est plus petit !" << std::endl;
        } else {
            std::cout << "Felicitation ! Vous avez trouve le nombre mystere en " << nombreTentatives << " tentatives !" << std::endl;
            return 0;
        }
    }

    std::cout << "Desole, vous avez utilise vos 5 tentatives. Le nombre mystere etait : " << nombreMystere << std::endl;
    return 0;
}
