#include <iostream>

using namespace std;

unsigned long long calculerFactorielle(int n) {
    if (n < 0) {
        cout << "Erreur : Impossible de calculer la factorielle d'un nombre négatif." << endl;
        return 0;
    }
    if (n == 0) {
        return 1;
    }

    unsigned long long resultat = 1;
    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int nombre;
    cout << "Entrez un nombre entier : ";
    cin >> nombre;
    cout << "Factorielle de " << nombre << " : " << calculerFactorielle(nombre) << endl;
    return 0;
}
