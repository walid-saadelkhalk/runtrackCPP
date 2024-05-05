#include <iostream>

int main(){

const int tableau = 10;
int tab[tableau];

std::cout << "Entrez 10 nombres" << std::endl;
for (int i = 0; i < tableau; i++){
    std::cout << "Entrez un nombre: ";
    std::cin >> tab[i];
}

    int bigNumber = tab[0];
    for (int i = 1; i < tableau; ++i) {
        if (tab[i] > bigNumber) {
            bigNumber = tab[i];
        }
    }
std::cout << "Voici le plus grand nombre que vous avez entre: "<< bigNumber<< std::endl;
return 0;

}