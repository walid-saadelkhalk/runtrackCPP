#include <iostream>

using namespace std;
main(){
    int i, n,som;
    som = 0;
    for (i=0; i<4; i++)
    {
        cout << "Entrez un nombre : ";
        cin >> n;
        som += n;
    }
    cout << "somme : " << som ;
}

#include <iostream>

using namespace std;


int main() {
    int i = 0, n, som = 0;
    while ( i < 4) {
        cout << "Entrez un nombre : ";
        cin >> n;
        som += n;
        i++;
    }
    cout << "somme : " << som;
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int i = 0, n, som = 0;

    do {
        cout << "Entrez un nombre : ";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);

    cout << "somme : " << som;
    return 0;
}
