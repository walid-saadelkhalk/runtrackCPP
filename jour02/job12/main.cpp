#include <iostream>

using namespace std;

// Fonction pour calculer la somme des n premiers termes de la série harmonique
double sommeHarmonique(int n) {
    double somme = 0.0;

    // Parcourir les n premiers termes de la série harmonique
    for (int i = 1; i <= n; i++) {
        somme += 1.0 / i;
    }

    return somme;
}

int main() {
    int n;

    cout << "Entrez le nombre de termes a sommer : ";
    cin >> n;

    if (n <= 0) {
        cout << "Erreur : Le nombre de termes doit être un entier positif." << endl;
        return 1; // Quitter le programme avec un code d'erreur
    }

    cout << "La somme des " << n << " premiers termes de la serie harmonique est : " << sommeHarmonique(n) << endl;
    return 0;
}
