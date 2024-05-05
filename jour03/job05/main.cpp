#include <iostream>
#include <iomanip>

int main(){
    int x;
    int y;

    std::cout << "Entrez un nombre compris entre 00 et 24: ";
    std::cin >> x;

    if (x < 0 || x > 24) {
        std::cout << "Le nombre n'est pas compris entre 00 et 24";
        return 0;
    }

    std::cout << "Entrez un nombre compris entre 00 et 60: ";
    std::cin >> y;
    if (y < 0 || y > 60) {
        std::cout << "Le nombre n'est pas compris entre 00 et 60";
        return 0;
    }

    std::cout << "Il est " << std::setfill('0') << std::setw(2) << x << "h"
            << std::setfill('0') << std::setw(2) << y << std::endl;
    return 0;
}