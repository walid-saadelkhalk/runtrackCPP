#include <iostream>

using namespace std;

void fibonacci(int limite) {
    int premier = 0, deuxieme = 1, suivant;
    cout << "Suite de Fibonacci jusqu'a la limite de " << limite << " :" << endl;
    cout << premier << " ";

    while (deuxieme <= limite) {
        cout << deuxieme << " "; 

        suivant = premier + deuxieme;
        premier = deuxieme;
        deuxieme = suivant;
    }
    cout << endl;
}

int main() {
    int limite;
    cout << "Entrez la limite pour la suite de Fibonacci : ";
    cin >> limite;
    fibonacci(limite);

    return 0;
}
