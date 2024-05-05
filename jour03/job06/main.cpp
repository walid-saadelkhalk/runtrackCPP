#include <iostream>

int main(){

const int tableau = 10;
int tab[tableau];

std::cout << "Entrez 10 nombres" << std::endl;
for (int i = 0; i < tableau; i++){
    std::cout << "Entrez un nombre: ";
    std::cin >> tab[i];
}

std::cout << "Voici les nombres que vous avez entres superieurs a 5: ";
for (int i = 0; i < tableau; i++){
    if(tab[i]>=5){
    std::cout << tab[i] << " ";
    }
}
std::cout << std::endl;

}