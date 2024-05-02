#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double nombre;

    while (true) {
        cout << "Entrez un nombre (0 pour quitter) : ";
        cin >> nombre;

        if (nombre == 0) {
            cout << "Fin du programme." << endl;
            break;  
        } else if (nombre < 0) {
            cout << "Erreur : La racine carrée d'un nombre négatif n'est pas définie." << endl;
            continue;  
        }
        double racine_carree = sqrt(nombre);
        cout << "La racine carree de " << nombre << " est : " << racine_carree << endl;
    }

    return 0;
}
