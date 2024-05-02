#include <iostream>
#include <cmath>

using namespace std;

int nombreDeChiffres(int nombre) {
    int count = 0;
    while (nombre != 0) {
        nombre /= 10;
        ++count;
    }
    return count;
}

bool estNarcissique(int nombre) {
    int nombreOrigine = nombre;
    int somme = 0;
    int puissance = nombreDeChiffres(nombre);
    
    while (nombre != 0) {
        int chiffre = nombre % 10;
        somme += pow(chiffre, puissance);
        nombre /= 10;
    }
    return somme == nombreOrigine;
}

int main() {
    int nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    if (estNarcissique(nombre)) {
        cout << nombre << " est un nombre narcissique." << endl;
    } else {
        cout << nombre << " n'est pas un nombre narcissique." << endl;
    }

    return 0;
}
